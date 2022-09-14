#include <iostream>
#include <cstring>
#include <ctime>
#include "RegCustomer.h"
#include "Membership.h"

using namespace std;

RegCustomer::RegCustomer() {}

RegCustomer::RegCustomer(string name, string email, Membership* membership) : Customer(name, email) {
	time_t currdate = time(0); 
	strftime(_dtReg, 11, "%d/%m/%Y", localtime(&currdate));
	
	_membership = membership;
}

RegCustomer::~RegCustomer() {}

char* RegCustomer::getDtReg() { return _dtReg; }
void RegCustomer::setDtReg(char* dtReg) { strcpy(_dtReg, dtReg); }

string RegCustomer::getTypeofMembership() { return _membership->getTypeofMembership(); }
