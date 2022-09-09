#include <iostream>
#include "Membership.h"

using namespace std;

Membership::Membership() {}
Membership::Membership(string typeofMembership, double discount) {
	_typeofMembership = typeofMembership;
	_discount = discount;
}
Membership::~Membership() {}

string Membership::getTypeofMembership() {
	return _typeofMembership;
}

void Membership::setTypeofMembership(string typeofMembership) {
	_typeofMembership = typeofMembership;
}

double Membership::getDiscount() {
	return _discount;
}

void Membership::setDiscount(double discount) {
	_discount = discount;
}

double Membership::getFees() { return _fees; }
void Membership::setFees(double fees) { _fees = fees; }
