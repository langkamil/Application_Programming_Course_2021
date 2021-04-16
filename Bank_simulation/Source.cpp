#include <iostream>

#include "Address.h"
#include "Account.h"
#include "Bank.h"
#include "Client.h"

using namespace std;
int main() {
	
	Address test;
	test.displayAddress();

	Address my_address("Rombu", 3, "4a", "Wroclaw", "12-345");
	my_address.displayAddress();

	cout << "\n-------------------------------------------------\n";

	Client test_client;
	test_client.displayClient();

	Client my_client("Albert", "Einstein", my_address);
	my_client.displayClient();

	cout << "\n-------------------------------------------------\n";
	
	Bank test_bank;
	test_bank.displayBank();

	Address bank_address("Baker str", 221, "B", "Londyn", "67-890");

	Bank my_bank("PKO", bank_address);
	my_bank.displayBank();

	cout << "\n-------------------------------------------------\n";

	Account test_account;
	test_account.displayAccount();

	Account my_account(my_bank , 12345, my_client, 1232.323);
	my_account.displayAccount();

	my_account.displayBalance();
	my_account.changeBalance(2121);
	my_account.changeBalance(-21);
	my_account.displayBalance();


	return 0;
}