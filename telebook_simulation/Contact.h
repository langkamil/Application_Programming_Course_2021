#pragma once
#include <iostream>

using namespace std;

class Contact {
	string email;
	string number;

public:
	Contact();
	Contact(string email, string number);

	string getEmail();
	string getNumber();

	void displayContact();
};