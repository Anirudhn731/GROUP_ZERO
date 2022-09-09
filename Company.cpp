#include <iostream>
#include <vector>
#include "Company.h"
#include "Customer.h"

using namespace std;

Company::Company() {}

Company::Company(string name) {
	_name = name;
}

Company::~Company() {}

void Company::setName(string name) { _name  = name; }

string Company::getName() { return _name; }

void Company::addCustomer(Customer* new_customer) {
	_customers.push_back(new_customer);
}
