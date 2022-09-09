#pragma once
#include <iostream>

class Customer {
	protected:
	string _custId;
	string _name;
	public:
	Customer();
	Customer(string custId, string name);
	~Customer();

	string getCustId();
	void setCustId(string custId);
	string getName();
	void setName(string name);
};
