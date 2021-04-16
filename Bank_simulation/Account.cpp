#include "Account.h"
#include <iostream>


using namespace std;
Account::Account(): number(000), balance(0.0)
{
	cout << "Constructor of class Account without arg. is working.\n";
}

Account::Account(Bank(_bank), long int _number, Client _client, float _balance):
	Bank(_bank), number(_number), client(_client), balance(_balance)

{
	cout << "Constructor of class Bank with 5 arg. is working.\n";
}


void Account::displayBalance()
{
	cout << "Balance: " << balance;
}

void Account::changeBalance(float _balance)
{
	balance = balance + _balance;
}

void Account::displayAccount()
{
	cout << "Bank: ";
	displayBank();
	cout << "Account number: " << number << "\nBalance: " << balance;
	cout << "Owner: ";
	client.displayClient();
}
