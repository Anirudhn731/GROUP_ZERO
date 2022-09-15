#include <iostream>
#include <string>
#include <limits>
using namespace std;

#include "CustomConsole.h"

	string CustomConsole::ReadString()
	{
		string str;
		cin >> str;
		return str;
	}

	float CustomConsole::ReadFloat()
	{
		float f;
		cin >> f;
		while(cin.fail()){
			cout<<"Please enter a float value: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cin >> f;
		}
		return f;
	}

	double CustomConsole::ReadDouble()
	{
		double d;
		cin >> d;
		while(cin.fail()){
			cout<<"Please enter a Double: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cin >> d;
		}

		return d;
	}

	int CustomConsole::ReadInt()
	{
		int i;
		cin >> i;
		while(cin.fail()){
			cout<<"Please enter an Integer: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cin >> i;
		}

		return i;
	}

	char CustomConsole::ReadChar()
	{
		char c;
		cin >> c;
		while(cin.fail()){
			cout<<"Please enter a single character: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cin >> c;
		}
		return c;
	}
	
	char CustomConsole::ReadLong()
	{
		long l;
		cin >> l;
		while(cin.fail()){
			cout<<"Please enter a long int value: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cin >> l;
		}
		return l;
	}
