#pragma once

#include <iostream>
#include "Address.h"

using namespace std;
class Bank {
protected:
	string name;
	Address b_address;

public:
	Bank();
	Bank(string name, Address b_address);

	string getName();
	Address getB_address();

	void setName(string name);
	void setB_address(Address b_address);

	void displayBank();
};