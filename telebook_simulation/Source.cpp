#include<iostream>
#include"Date.h"
#include"Person.h"
#include"Contact.h"
#include"Telebook.h"
#include"Address.h"
#include"Work.h"

using namespace std;

int main() {
/*
	Date my_date;

	my_date.displayDate();

	Date new_date(17, 3, 2021);

	new_date.displayDate();

	cout << "\n----------------------------\n";

	Person my_person;
	my_person.displayPerson();

	cout << "\n----------------------------\n";

	Person new_person("Marek", "Mostowiak", new_date);

	new_person.displayPerson();

	cout << "\n----------------------------\n";

	Person mega_person("Karol", "Kot",2,3,4);
	mega_person.displayPerson();
	cout << "Imie " << mega_person.getName() << endl;
	cout << "Data urodzenia " << mega_person.getBday().getYear() 
		 << "-"<<mega_person.getBday().getMonth() << "-"
		 << mega_person.getBday().getDay()
		 << endl;

	cout << "\n----------------------------\n";

	Contact new_contact;
	new_contact.displayContact();

	Contact super_contact("kamil.langowski0@gmail.com", "731217921");
	super_contact.displayContact();

	cout << "\n----------------------------\n";
	
	Telebook my_telebook;
	my_telebook.displayTelebook();

	cout << "\n----------------------------\n";
	
	Address my_address;
	my_address.displayAddress();

	Address new_address("Jana Pawla",2222,"39A", "Koscierzyna", "83-422" );
	new_address.displayAddress();
	
	cout << "\n----------------------------\n";
	
	Work my_work;
	my_work.displayWork();

	Work new_work("Januszex", new_address, super_contact, new_date);
	new_work.displayWork();
	return 0;
	*/
	cout << "\n---------XXXXXX------------\n";

	Telebook final_telebook;
	final_telebook.displayTelebook();

	cout << "\n---------XXXXXX------------\n";

	Date my_date(12, 03, 1975);
	Date employment_date(14, 06, 2010);
	
	Contact my_contact("XXX@02.pl", "222091044");
	Contact work_contact("YYY@wp.pl", "500287321");
	
	Person ja("Stefan", "Banach", my_date);
	
	Address my_address("Bordowa", 2, "A/4", "Wdzydze Kiszewskie", "83-404");
	Address work_address("Czarna", 1, "2", "Krakow", "12-421");
	
	Work my_work("Kogucik", work_address, work_contact, employment_date);

	Telebook complete_telebook(ja, my_address, my_contact, my_work);
	complete_telebook.displayTelebook();


}