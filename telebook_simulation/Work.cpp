#pragma once

#include "Work.h"
#include <iostream>

using namespace std;
Work::Work() : w_name("none")
{
	cout << "Dziala konstruktor klasy Work bez arg.\n";

}

Work::Work(string _w_name, Address _w_adress, Contact _w_contact, Date _empl_date):
	w_name(_w_name), w_address(_w_adress), w_contact(_w_contact), empl_date(_empl_date)
{
	cout << "Dziala konstruktor klasy Work z  4 arg.\n";

}

string Work::getW_name(){return w_name;}

Address Work::getAddress(){return w_address;}

Contact Work::getContact(){return w_contact;}

Date Work::getDate(){return empl_date;}

void Work::displayWork()
{
	cout << "\nNazwa firmy: " << w_name << "\n";
	cout << "\nAdres pracy: \n";
	w_address.displayAddress();
	cout << "\nKontakt do pracy: \n";
	w_contact.displayContact();
	cout << "\Data zatrudnienia: \n";
	empl_date.displayDate();
}













