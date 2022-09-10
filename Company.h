#pragma once

#include <iostream>
#include <vector>
#include "Customer.h"

using namespace std;

class Company {
	string _name;
	vector<Customer*> _customers;
	//Instead of vector, we could use sets/lists etc., but for simplicity, we are using vectors here
	public:
	Company();
	Company(string name);
	~Company();
	void setName(string name);
	string getName();
	void addCustomer(Customer* new_customer);
};
