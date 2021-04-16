#include "Bank.h"

Bank::Bank(): name("NaN")
{
	cout << "Constructor of class Bank without arg. is working.\n";

}

Bank::Bank(string _name, Address _b_address):
	name(_name), b_address(_b_address)
{
	cout << "Constructor of class Bank with 2 arg. is working.\n";

}

string Bank::getName()
{
	return name;
}

Address Bank::getB_address()
{
	return b_address;
}

void Bank::setName(string _name)
{
	name = _name;
}

void Bank::setB_address(Address _b_address)
{
	b_address = _b_address;
}

void Bank::displayBank()
{
	cout << "Bank name: " << name << "\nBank address: ";
	b_address.displayAddress();
}
