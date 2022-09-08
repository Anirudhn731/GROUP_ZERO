#pragma once

#include <iostream>
#include "Membership.h"

using namespace std;

class RegCustomer {
	string _dtReg;
	Membership _membership;
	public:
	RegCustomer();
	RegCustomer(string dtReg);
	~RegCustomer();

	string getDtReg();
	void setDtReg(string dtReg);
	void setMembership(Membership membership);

};
