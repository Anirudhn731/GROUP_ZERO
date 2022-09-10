#include <iostream>
#include "Customer.h"

using namespace std;

Customer::Customer() {}

Customer::Customer(string custId, string name, string email){
	_custId = custId;
	_name = name;
	_email = email;
}

Customer::~Customer() {}

string Customer::getCustId() { return _custId; }
void Customer::setCustId(string custId) { _custId = custId; }

string Customer::getName() { return _name; }
void Customer::setName(string name) { _name = name; }

string Customer::getEmail() { return _email; }
void Customer::setEmail(string email) { _email = email; }
