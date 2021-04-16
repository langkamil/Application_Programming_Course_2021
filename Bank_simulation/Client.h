#pragma once

#include <iostream>
#include "Address.h"

using namespace std;
class Client {
	string name;
	string surname;
	Address address;

public:
	Client();
	Client(string name, string surname, Address address);

	string getName();
	string getSurname();
	Address getAddress();

	void setName(string name);
	void setSurname(string surname);
	void setAddress(Address address);

	void displayClient();
};
