#pragma once

#include"Date.h" //to dostawca a Person to klient
#include<iostream>

using namespace std;

class Person {
	string name;
	string surname;
	Date b_day;

public:
	Person();
	Person(string name, string surname, Date birthday);
	Person(string name, string surname, int  day, int month, int year);

	string getName();
	string getSurname();
	Date getBday();

	void displayPerson();
};

