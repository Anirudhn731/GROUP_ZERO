#include <iostream>
#include <map>
#include "Membership.h"
#include "MembershipFactory.h"
#include "CustomConsole.h"

using namespace std;

int MembershipFactory::count = 0;
MembershipFactory* MembershipFactory::factoryInstance = nullptr;

MembershipFactory::MembershipFactory() {}

void MembershipFactory::createMembership(string typeofMembership, double fees, double discount) {
	if(_pool.find(typeofMembership) == _pool.end()) {
		_pool.insert({typeofMembership, Membership(typeofMembership, discount, fees)});
	}
}
/*
void MembershipFactory::createMembership(Membership& new_membership) {
	string type = new_membership.getTypeofMembership();
	if(_pool.find(type) == _pool.end()) {
		_pool.insert({type, new_membership});
	}
}
*/
MembershipFactory* MembershipFactory::createFactoryInstance() {
	MembershipFactory* mf;
	if(MembershipFactory::count == 0) {
		mf = new MembershipFactory();
		MembershipFactory::count++;
		MembershipFactory::factoryInstance = mf;
	}
	else {
		mf = MembershipFactory::factoryInstance;
	}

	return mf;
}

void MembershipFactory::displayMembership() {
	cout << endl << "Memberships:- " << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "TYPE\tFEES\tDISCOUNT" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	for(auto iter = _pool.begin(); iter != _pool.end(); iter++) {
		cout << iter->first << "\t";
		cout << (iter->second).getFees() << "\t";
		cout << (iter->second).getDiscount() << "%" << endl;
	}
	cout << endl << "-------------------------------------------------------------------" << endl;
	
}
	
Membership* MembershipFactory::getMembership() {
	char yn;
	for(auto iter = _pool.begin(); iter != _pool.end(); iter++) {
		cout << "-------------------------------------------------------------------" << endl;
		cout << "TYPE\tFEES\tDISCOUNT" << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << iter->first << "\t";
		cout << (iter->second).getFees() << "\t";
		cout << (iter->second).getDiscount() << "%" << endl;
		cout << endl;
		cout << "Do you want a " << iter->first << " Membership?(Y/N): ";
		yn = CustomConsole::ReadChar();
		while(yn != 'Y' && yn != 'N' && yn != 'y' && yn != 'n') {
			cout << "Enter valid choice:- ";
			yn = CustomConsole::ReadChar();
		}
		if(yn == 'y' || yn == 'Y') {
			return &(iter->second);
		}
	}
	
	return nullptr;
}
	
	
