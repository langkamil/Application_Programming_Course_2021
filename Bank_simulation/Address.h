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

	void setStreet(string street);
	void setHouse_num(int house_num);
	void setApart_num(string apart_num);
	void setTown(string town);
	void setCode(string code);

	void displayAddress();


};
