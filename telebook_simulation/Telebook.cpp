#pragma once

#include "Telebook.h"
#include <iostream>

using namespace std;

Telebook::Telebook()
{
	cout << "Dziala konstruktor klasy Telebook bez arg.\n";

}

Telebook::Telebook(Person _person, Address _address,  Contact _contact, Work _work): person(_person), address(_address)
,contact(_contact), work(_work)
{
	cout << "Dziala konstruktor klasy Telebook z 4 arg.\n";

}

Person Telebook::getPerson(){return person;}

Address Telebook::getAddress(){return address;}

Contact Telebook::getContact(){return contact;}

Work Telebook::getWork(){return work;}

void Telebook::displayTelebook()
{
	person.displayPerson();
	address.displayAddress();
	contact.displayContact();
	work.displayWork();
}


