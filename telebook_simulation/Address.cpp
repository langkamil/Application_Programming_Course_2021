#pragma once

#include "Address.h"
#include<iostream>

using namespace std;
Address::Address():street("none"), house_num(0), apart_num("0"), town("none"), code("none")
{
	cout<< "Dziala konstruktor klasy Address bez arg.\n";
}

Address::Address(string _street, int _house_num, string _apart_num, string _town, string _code):
	street(_street), house_num(_house_num), apart_num(_apart_num), town(_town), code(_code)
{
	cout << "Dziala konstruktor klasy Address z 5 arg.\n";

}

string Address::getStreet(){return street;}

int Address::getHouse_num(){return house_num;}

string Address::getApart_num(){return apart_num;}

string Address::getTown(){return town;}

string Address::getCode(){return code;}

void Address::displayAddress()
{
	cout << "\nUlica: " << street << "\nNumer domu: " << house_num << "\nNumer mieszkania: " << apart_num << "\nMiejscowosc: " << town
		<< "\nKod: " << code << "\n";
}



