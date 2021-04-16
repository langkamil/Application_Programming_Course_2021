#pragma once

#include"Person.h"
#include"Contact.h"
#include"Work.h"
#include "Address.h"

class Telebook {
	Person person;
	Address address;
	Contact contact;
	Work work;

public:
	
	Telebook();
	Telebook(Person person, Address address, Contact contact, Work work);

	Person getPerson();
	Address getAddress();
	Contact getContact();
	Work getWork();

	void displayTelebook();
};