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
	void createMembership(string typeofMembership, double fees, double discount);
	void createMembership(const Membership& new_membership);
	static MembershipFactory* createFactoryInstance();
};
