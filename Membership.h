#pragma once

#include <iostream>

using namespace std;

class Membership {
	string _typeofMembership;
	double _discount;
	public:
	Membership();
	Membership(string typeofMembership, double discount);
	~Membership();
	
	string getTypeofMembership();
	void setTypeofMembership(string typeofMembership);
	double getDiscount();
	
};
