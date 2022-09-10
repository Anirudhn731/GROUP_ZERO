#include <iostream>
#include <map>
#include "Membership.h"
#include "MembershipFactory.h"

using namespace std;

int MembershipFactory::count = 0;
MembershipFactory* MembershipFactory::factoryInstance = nullptr;

MembershipFactory::MembershipFactory() {}

void MembershipFactory::createMembership(string typeofMembership, double fees, double discount) {
	if(_pool.find(typeofMembership) == _pool.end()) {
		_pool.insert({typeofMembership, Membership(typeofMembership, discount, fees)});
	}
}

void MembershipFactory::createMembership(Membership& new_membership) {
	string type = new_membership.getTypeofMembership();
	if(_pool.find(type) == _pool.end()) {
		_pool.insert({type, new_membership});
	}
}

MembershipFactory* MembershipFactory::createFactoryInstance() {
	MembershipFactory* mf;
	if(MembershipFactory::count == 0) {
		mf = new MembershipFactory();
		MembershipFactory::count++;
		MembershipFactory::factoryInstance = mf;
	}
	else {
		mf = MembershipFactory::factoryInstance;
	}

	return mf;
}

