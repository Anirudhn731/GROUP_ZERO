#include <iostream>
#include "Customer.h"

using namespace std;

long Customer::_autoCustId = 100;

Customer::Customer() {}

Customer::Customer(string name, string email){
	_custId = _autoCustId++;
	_name = name;
	_email = email;
}

Customer::~Customer() {}

long Customer::getCustId() { return _custId; }

string Customer::getName() { return _name; }
void Customer::setName(string name) { _name = name; }

string Customer::getEmail() { return _email; }
void Customer::setEmail(string email) { _email = email; }

