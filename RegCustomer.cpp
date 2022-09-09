#include <iostream>
#include "RegCustomer.h"
#include "Membership.h"

using namespace std;

RegCustomer::RegCustomer() {}

RegCustomer(string custId, string name, string dtReg) : Customer(custId, name) {
	_dtReg = dtReg;
}

RegCustomer::~RegCustomer() {}

string RegCustomer::getDtReg() { return _dtReg; }
void RegCustomer::setDtReg(string dtReg) { _dtReg = dtReg; }

void RegCustomer::setMembership(Membership* membership) { _membership = membership; }
