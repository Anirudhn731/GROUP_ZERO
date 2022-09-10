#include <iostream>
#include <vector>
#include "Company.h"
#include "Customer.h"
#include "RegCustomer.h"
#include "CustomConsole.h"

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

void Company::createCustomer(Membership* membership) {
	Customer* newCustomer;
	string name, custId, email; 
	cout << "Enter Customer Details here: " << endl;
	cout << "Enter Customer Name: ";
	name = CustomConsole::ReadString();
	cout << "Enter Customer ID: ";
	custId = CustomConsole::ReadString();
	cout << "Enter Customer Email: ";
	email = CustomConsole::ReadString();
	if(membership != nullptr) {
		string dtReg;
		cout << "Enter Registration Date:- ";
		dtReg = CustomConsole::ReadString();
		newCustomer = new RegCustomer(custId, name, email, dtReg, true, membership);
		addCustomer(newCustomer);
	}
	else {
		newCustomer = new Customer(custId, name, email, false);
		addCustomer(newCustomer);
	}
}

void Company::deleteCustomer() {
	int i;
	cout << "Enter Customer Id: ";
	string custId = CustomConsole::ReadString();
	
	for(i = 0; i <= _customers.size(); i++) {
		if(custId == _customers[i]->getCustId()) {
			break;
		}
	}
	
	if(i == _customers.size()) {
		cout << "You've Entered Invalid Customer ID!" << endl;
	}
	else {
		delete _customers[i];
		_customers.erase(_customers.begin() + i);
	}
	
}
			
	
	
	 
void Company::displayCompany() {
	cout << endl << "Company Name: " << _name << endl;
	cout << "Customers:- " << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "CUSTOMERID\tNAME\tEMAIL\t\tisRegistered?\tDate Registered\tMembership" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	
	for(int i = 0; i < _customers.size(); i++) {
		cout << _customers[i]->getCustId() << "\t\t";
		cout << _customers[i]->getName() << "\t";
		cout << _customers[i]->getEmail() << "\t";
		if(_customers[i]->isRegCustomer()) {
			RegCustomer* rc = dynamic_cast<RegCustomer*>(_customers[i]);
			cout << "Yes" << "\t";
			cout << rc->getDtReg() << "\t";
			cout << rc->getTypeofMembership() << "\t";
		}
		else {
			cout << "---" << "\t\t";
			cout << "---" << "\t\t";
			cout << "---" << "\t\t";
		}
		
		cout << endl;
	}
}
		
		
		
		
		
