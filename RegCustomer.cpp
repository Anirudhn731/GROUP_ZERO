#include <iostream>
#include "RegCustomer.h"
#include "Membership.h"

using namespace std;

RegCustomer::RegCustomer() {}

RegCustomer::RegCustomer(string custId, string name, string email, string dtReg, bool isRegistered, Membership* membership) : Customer(custId, name, email, isRegistered) {
	_dtReg = dtReg;
	_membership = membership;
}

RegCustomer::~RegCustomer() {}

string RegCustomer::getDtReg() { return _dtReg; }
void RegCustomer::setDtReg(string dtReg) { _dtReg = dtReg; }

string RegCustomer::getTypeofMembership() { return _membership->getTypeofMembership(); }
