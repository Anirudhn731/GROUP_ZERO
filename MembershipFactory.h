#pragma once

#include <iostream>
#include <map>
#include "Membership.h"

class MembershipFactory {
	Map<String, Membership> _pool
	static MembershipFactory* factoryInstance;
	static int count; 
	MembeshipFactory()
	public:
	Membership createMembership(string typeofMembership, double fees, double discount);
	static MembershipFactory* createFactoryInstance();
};
