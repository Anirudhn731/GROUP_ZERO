#include <iostream>
#include <vector>
#include <map>
#include "Company.h"
#include "Customer.h"
#include "Membership.h"
#include "MembershipFactory.h"
#include "RegCustomer.h"
#include "CustomConsole.h"

using namespace std;

int main() {
	Company myCompany("Anirudh's Company");

	//MembershipFactory singleton instance
	MembershipFactory* memFactory = MembershipFactory::createFactoryInstance();

	//Producing Memberships using factory pattern
	memFactory->createMembership("GOLD", 249.99, 35);
	memFactory->createMembership("SILVER", 199.99, 25);
	memFactory->createMembership("BRONZE", 134.99, 15);

	while(1) {
		int option;
		cout << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "\tCOMPANY MEMBERSHIP MENU" << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cout << "1. Add a Customer" << endl;	
		cout << "2. Delete a Customer" << endl;
		cout << "3. Display Company Details" << endl;
		cout << "4. Exit Menu" << endl; 
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Enter your choice: ";
		option = CustomConsole::ReadInt();
		cout << endl;
		switch(option) {
		case 1: 
			char yn;
			cout << "Do you want to opt for Membership?(Y/N):- ";
			yn = CustomConsole::ReadChar();
			while(yn != 'Y' && yn != 'N' && yn != 'y' && yn != 'n') {
				cout << "Enter valid choice:- ";
				yn = CustomConsole::ReadChar();
			}
			if(yn == 'y' || yn == 'Y') {
				cout << "Select your Membership type:- " << endl;
				Membership* membership = memFactory->getMembership();
				myCompany.createCustomer(membership);
			}
			else {
				myCompany.createCustomer(nullptr);
			}
			break;
		case 2: 
			myCompany.deleteCustomer();
			break;
		case 3:
			myCompany.displayCompany();
			break;
		case 4: break;
		default: cout << "You've entered an invalid choice!" << endl;
		}
		if(option == 4) break;
		else continue;
	}
	
	return 0;
}
