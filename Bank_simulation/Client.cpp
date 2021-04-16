#pragma once

#include "Client.h"

Client::Client(): name("John"), surname("Doe")
{
	cout << "Constructor of class Client without arg. is working.\n";
}

Client::Client(string _name, string _surname, Address _address):
	name(_name), surname(_surname), address(_address)
{
	cout << "Constructor of class Client with 3 arg. is working.\n";
}

string Client::getName()
{
	return name;
}

string Client::getSurname()
{
	return surname;
}

Address Client::getAddress()
{
	return address;
}

void Client::setName(string _name)
{
	name = _name;
}

void Client::setSurname(string _surname)
{
	surname = _surname;
}

void Client::setAddress(Address _address)
{
	address = _address;
}

void Client::displayClient()
{
	cout << "Name: " << name << "\nSurname: " << surname;
	address.displayAddress();
}
