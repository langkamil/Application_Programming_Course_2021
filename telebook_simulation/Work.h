#pragma once
#include <iostream>
#include "Address.h"
#include "Date.h"
#include "Contact.h"

using namespace std;
class Work {
	string w_name;
	Address w_address;
	Contact w_contact;
	Date empl_date;

public:
	Work();
	Work(string w_name, Address w_adress, Contact w_contact, Date empl_date);

	string getW_name();
	Address getAddress();
	Contact getContact();
	Date getDate();

	void displayWork();
};