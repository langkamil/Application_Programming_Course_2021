#pragma once

#include "Contact.h"

Contact::Contact():email("none"), number("123456789")
{
	cout << "Dziala konstruktor klasy Contact bez arg.\n";
}

Contact::Contact(string _email, string _number): email(_email), number(_number)
{
	cout << "Dziala konstruktor klasy Contact z 2 arg.\n";
}

string Contact::getEmail(){return email;}

string Contact::getNumber(){return number;}

void Contact::displayContact()
{
	cout << "Email " << email << endl;
	cout << "Numer " << number << endl;
}



