#pragma once

#include <iostream>

using namespace std;

class Membership {
	string _typeofMembership;
	double _discount;
	double _fees;
	public:
	Membership();
	Membership(string typeofMembership, double discount, double fees);
	~Membership();
	
	string getTypeofMembership();
	void setTypeofMembership(string typeofMembership);
	double getDiscount();
	void setDiscount(double discount);	
	double getFees();
	void setFees(double fees);
};
