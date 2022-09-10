#pragma once

#include <iostream>
#include "Membership.h"
#include "Customer.h"

using namespace std;

class RegCustomer: public Customer {
	string _dtReg;
	Membership* _membership;
	public:
	RegCustomer();
	RegCustomer(string custId, string name, string email, string dtReg, bool isRegistered, Membership* membership);
	~RegCustomer();

	string getDtReg();
	void setDtReg(string dtReg);
	string getTypeofMembership();
};
