#pragma once

#include <iostream>
#include <Map>
#include "Membership.h"

class MembershipFactory {
	Map<String, Membership> _pool
	MembeshipFactory()
	public:
	Membership createMembership(string typeofMembership, double fees, double discount);
	
