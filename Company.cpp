#include <iostream>
#include <iomanip>
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

Company::~Company() {
	for(int i = 0; i < _customers.size(); i++) {
		delete _customers[i];
	}
}

void Company::setName(string name) { _name  = name; }

string Company::getName() { return _name; }

void Company::addCustomer(Customer* new_customer) {
	_customers.push_back(new_customer);
}

void Company::createCustomer(Membership* membership) {
	Customer* newCustomer;
	string name, email; 
	cout << "Enter Customer Details here: " << endl;
	cout << "Enter Customer Name: ";
	name = CustomConsole::ReadString();
	cout << "Enter Customer Email: ";
	email = CustomConsole::ReadString();
	if(membership != nullptr) {
		newCustomer = new RegCustomer(name, email, membership);
		addCustomer(newCustomer);
	}
	else {
		newCustomer = new Customer(name, email);
		addCustomer(newCustomer);
	}
}

void Company::deleteCustomer() {
	int i;
	cout << "Enter Customer Id: ";
	long custId = CustomConsole::ReadLong();
	
	for(i = 0; i < _customers.size(); i++) {
		if(custId == _customers[i]->getCustId()) {
			break;
		}
	}
	
	if(i == _customers.size()) {
		cout << "You've Entered Invalid Customer ID!" << endl;
	}
	else {
		cout << "...Deleting" << endl;
		delete _customers[i];
		_customers.erase(_customers.begin() + i);
		cout << "The customer has been deleted!" << endl;
	}
}
			
	
	
	 
void Company::displayCompany() {
	cout << endl << "Company Name: " << _name << endl;
	cout << "Customers:- " << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "CUSTOMERID" << setw(13);
	cout << "NAME" << setw(15);
	cout << "EMAIL" << setw(25);
	cout << "isRegistered?" << setw(20);
	cout << "Date Registered" << setw(17);
	cout << "Membership" << setw(10) << endl;
	cout << "-------------------------------------------------------------------" << endl;
	
	for(int i = 0; i < _customers.size(); i++) {
		cout << _customers[i]->getCustId() << setw(20);
		cout << _customers[i]->getName() << setw(20);
		cout << _customers[i]->getEmail() << setw(17);
		
		RegCustomer* rc = dynamic_cast<RegCustomer*>(_customers[i]);
		if(rc != nullptr) {
			cout << "Yes" << setw(20);
			cout << rc->getDtReg() << setw(17);
			cout << rc->getTypeofMembership() << setw(10);
		}
		else {
			cout << "---" << setw(20);
			cout << "---" << setw(17);
			cout << "---" << setw(10);
		}
		
		cout << endl;
	}
}
		
		
		
		
		
