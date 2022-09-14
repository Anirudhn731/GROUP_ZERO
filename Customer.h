#pragma once
#include <iostream>

using namespace std;

class Customer {
	protected:
	static long  _autoCustId;
	long _custId;
	string _name;
	string _email;
	Customer();
	public:
	Customer(string name, string email);
	virtual	~Customer();

	long getCustId();
	string getName();
	void setName(string name);
	string getEmail();
	void setEmail(string email);
	
};
