#pragma once

#include "Bank.h"
#include "Client.h"


class Account: public Bank {
	long int number;
	Client client;
	float balance;


public: 
	Account();
	Account(Bank(b), long int number, Client client, float balance);



	void displayBalance();
	void changeBalance(float balance);

	void displayAccount();


};