#pragma once
#include <iostream>

using namespace std;

class Customer {
	protected:
	string _custId;
	string _name;
	string _email;
	public:
	Customer();
	Customer(string custId, string name, string email);
	~Customer();

	string getCustId();
	void setCustId(string custId);
	string getName();
	void setName(string name);
	string getEmail();
	void setEmail(string email);
};
