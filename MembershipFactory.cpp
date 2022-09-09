#include <iostream>
#include <map>
#include "Membership.h"
#include "MembershipFactory.h"

int MembershipFactory::count = 0;
MembershipFactory* MembershipFactory::factoryInstance = nullptr;

Membership MembershipFactory::createMembership(string typeofMemberhsip, double fees, double discount) {
	if(_pool.find(typeofMembership) == _pool.end()) {
		_pool.insert({typeofMembership, Membership(typeofMembership, discount, fees)});
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
		mf = MembershipFactory::mf;
	}

	return mf;
}
