#include <iostream>
#include "Customer.h"

using namespace std;

Customer::Customer() {}

Customer::Customer(string custId, string name) {
	_custId = custId;
	_name = name;
}

Customer::~Customer() {}

string Customer::getCustId() { return _custId; }

void setCustId(string custId) { _custId = custId; }

string getName() { return _name; }
void setName(string name) { _name = name; }
