membership: Program.o Company.o Customer.o Membership.o MembershipFactory.o RegCustomer.o CustomConsole.o
	g++ -o membership Program.o Company.o Customer.o Membership.o MembershipFactory.o RegCustomer.o CustomConsole.o

Program.o: Program.cpp Company.h Customer.h Membership.h MembershipFactory.h RegCustomer.h CustomConsole.h
	g++ -c Program.cpp

Company.o: Company.cpp Company.h Customer.h Membership.h CustomConsole.h
	g++ -c Company.cpp

Customer.o: Customer.cpp Customer.h
	g++ -c Customer.cpp

Membership.o: Membership.cpp Membership.h
	g++ -c Membership.cpp

MembershipFactory.o: MembershipFactory.cpp MembershipFactory.h Membership.h
	g++ -c MembershipFactory.cpp

RegCustomer.o: RegCustomer.cpp RegCustomer.h Customer.h
	g++ -c RegCustomer.cpp

CustomConsole.o: CustomConsole.cpp CustomConsole.h
	g++ -c CustomConsole.cpp
