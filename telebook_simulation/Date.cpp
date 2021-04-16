#include<iostream>
#include "Date.h"

using namespace std;

Date::Date(): day(1), month(1), year(1900)
{
	cout << "Dziala konstruktor klasy Date bez arg.\n";
}

Date::Date(int _day, int _month, int _year): day(_day), month(_month), year(_year)
{
	cout << "Dziala konstruktor klasy Date z arg.\n";
	cout << "Miesiac przed warunku " << month << endl;
	
	//trzeba zrobic ograniczenia dla wprowadzanych danych
	if (_month < 1 || _month > 12) {
		cout << "Wprowadzono bledny miesiac\nUstawiam wartosc domyslna\n";
		month = 1;
	}
	cout << "Miesiac po warunku " << month << endl;

}

int Date::getDay(){ return day;}

int Date::getMonth(){ return month;}

int Date::getYear(){ return year;}

void Date::displayDate()
{
	cout << "Moja data: " << year << "-" << month << "-" << day << endl;
}

