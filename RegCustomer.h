#pragma once

#include <iostream>
#include "Membership.h"
#include "Customer.h"

using namespace std;

class RegCustomer: public Customer {
	char _dtReg[11];
	Membership* _membership;
	public:
	RegCustomer();
	RegCustomer(string name, string email, Membership* membership);
	~RegCustomer();

	char* getDtReg();
	void setDtReg(char* dtReg);
	string getTypeofMembership();
};
