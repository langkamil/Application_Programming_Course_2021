#pragma once

#include "Person.h"
#include <iostream>

Person::Person(): name("John"), surname("Doe") //Konstruktor klasy date i tak sie zglosi i bardzo dobrze
{
	cout << "Dziala konstruktor klasy Person bez arg.\n";
}

Person::Person(string _name, string _surname, Date _birthday): name(_name), surname(_surname), b_day(_birthday)
{
	cout << "Dziala konstruktor klasy Person z 3 arg.\n";
	//b_day = _birthday;
}

Person::Person(string _name, string _surname, int _day, int _month, int _year):
	name(_name),
	surname(_surname)	
{
	cout << "Dziala konstruktor klasy Person z 5 arg.\n";
	b_day = Date(_day, _month, _year);
}

string Person::getName(){return name;}

string Person::getSurname(){ return surname;}

Date Person::getBday(){	return b_day;}

void Person::displayPerson()
{
	cout << "Imie " << name << endl;
	cout << "Nazwisko " << surname << endl;
	//cout << "Data urodzenia " << b_day.getYear() << "-" << b_day.getMonth() << "-" << b_day.getDay() << endl;
	b_day.displayDate();
}
