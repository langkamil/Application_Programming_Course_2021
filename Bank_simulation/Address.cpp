#pragma once

#include "Address.h"
#include<iostream>

using namespace std;
Address::Address() :street("Nan"), house_num(0), apart_num("0"), town("Nan"), code("Nan")
{
	cout << "Constructor of class Address without arg. is working.\n";
}

Address::Address(string _street, int _house_num, string _apart_num, string _town, string _code) :
	street(_street), house_num(_house_num), apart_num(_apart_num), town(_town), code(_code)
{
	cout << "Constructor of class Address with 5 arg. is working.\n";

}

string Address::getStreet() { return street; }

int Address::getHouse_num() { return house_num; }

string Address::getApart_num() { return apart_num; }

string Address::getTown() { return town; }

string Address::getCode() { return code; }

void Address::setStreet(string _street)
{
	street = _street;
}

void Address::setHouse_num(int _house_num)
{
	house_num = _house_num;
}

void Address::setApart_num(string _apart_num)
{
	apart_num = _apart_num;
}

void Address::setTown(string _town)
{
	town = _town;
}

void Address::setCode(string _code)
{
	code = _code;
}



void Address::displayAddress()
{
	cout << "\nStreet: " << street << "\nHouse number: " << house_num << "\nApartment number: " << apart_num << "\nTown: " << town
		<< "\nZip code: " << code << "\n";
}
