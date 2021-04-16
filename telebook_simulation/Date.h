#pragma once

class Date {
	int day, month, year;
public:
	Date();
	Date(int day, int month, int year);
//getery 
	int getDay();
	int getMonth();
	int getYear();

	void displayDate();

};