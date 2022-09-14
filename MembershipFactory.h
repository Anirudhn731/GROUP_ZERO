#pragma once

#include <iostream>
#include <map>
#include "Membership.h"

using namespace std;

class MembershipFactory {
	map<string, Membership> _pool;
	static MembershipFactory* _factoryInstance;
	MembershipFactory();
	public:
	~MembershipFactory();
	void createMembership(string typeofMembership, double fees, double discount);
	//void createMembership(Membership& new_membership);
	static MembershipFactory* createFactoryInstance();
	Membership* getMembership();
	void displayMembership();
};
