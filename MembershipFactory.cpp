#include <iostream>
#include <map>
#include "Membership.h"
#include "MembershipFactory.h"

int MembershipFactory::count = 0;
MembershipFactory* MembershipFactory::factoryInstance = nullptr;

void MembershipFactory::createMembership(string typeofMemberhsip, double fees, double discount) {
	if(_pool.find(typeofMembership) == _pool.end()) {
		_pool.insert({typeofMembership, Membership(typeofMembership, discount, fees)});
	}
}

void createMembership(const Membership& new_membership) {
	string type = new_membership.getTypeofMembership();
	if(_pool.find(type) == _pool.end()) {
		_pool.insert({type, new_membership});
	}
}

MembershipFactory* MembershipFactory::createFactoryInstance() {
	MembershipFactory* mf;
	if(MemberShipFactory::count == 0) {
		mf = new MembershipFactory();
		MembershipFactory::count++;
		MembershipFactory::factoryInstance = mf;
	}
	else {
		mf = MembershipFactory::factoryInstance;
	}

	return mf;
}
