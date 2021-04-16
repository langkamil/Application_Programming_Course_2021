#pragma once
#include <iostream>

using namespace std;

class Address {
	string street;
	int house_num;
	string apart_num;
	string town;
	string code;
public:
	Address();
	Address(string street, int house_num,
		string apart_num, string town, string code);

	string getStreet();
	int getHouse_num();
	string getApart_num();
	string getTown();
	string getCode();

	void displayAddress();

};
