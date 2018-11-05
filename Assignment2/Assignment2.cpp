// Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;


#include <string>
using std::string;

#include "Contact.h"

int main()
{
	// Shania Twain's contact and vector

	Contact Shania("Shania", "Twain", "2074316969", "shania.twain@thomas.edu");
	vector<string> ShaniaContact;
	ShaniaContact.push_back(Shania.getFirstName());
	ShaniaContact.push_back(Shania.getLastName());
	ShaniaContact.push_back(Shania.getphoneNumber());
	ShaniaContact.push_back(Shania.getemail());
	cout << "First Name: " << ShaniaContact[0] << endl;
	cout << "Last Name: " << ShaniaContact[1] << endl;
	cout << "Phone Number: " << ShaniaContact[2] << endl;
	cout << "Email: " << ShaniaContact[3] << endl;
	cout << "" << endl;

	// George Strait's contact and vector

	Contact George("George", "Strait", "2074314568", "george.strait@thomas.edu");
	vector<string> GeorgeContact;
	GeorgeContact.push_back(George.getFirstName());
	GeorgeContact.push_back(George.getLastName());
	GeorgeContact.push_back(George.getphoneNumber());
	GeorgeContact.push_back(George.getemail());
	cout << "First Name: " << GeorgeContact[0] << endl;
	cout << "Last Name: " << GeorgeContact[1] << endl;
	cout << "Phone Number: " << GeorgeContact[2] << endl;
	cout << "Email: " << GeorgeContact[3] << endl;
	cout << "" << endl;

	// Merle Haggard's default contact and vector

	Contact Merle;
	Merle.setFirstName("Merle");
	Merle.setLastName("Haggard");
	Merle.setphoneNumber("2074312222");
	Merle.setemail("merle.haggard@thomas.edu");
	vector<string> MerleContact;
	MerleContact.push_back(Merle.getFirstName());
	MerleContact.push_back(Merle.getLastName());
	MerleContact.push_back(Merle.getphoneNumber());
	MerleContact.push_back(Merle.getemail());
	cout << "First Name: " << MerleContact[0] << endl;
	cout << "Last Name: " << MerleContact[1] << endl;
	cout << "Phone Number: " << MerleContact[2] << endl;
	cout << "Email: " << MerleContact[3] << endl;
	cout << "" << endl;

	// New variable, pointer, and reference

	string CountryName = GeorgeContact[0];
	string *CountryLastName = &GeorgeContact[1];
	string &refPhoneNumber = GeorgeContact[2];

	// Variables that are going to be changed

	Merle.setFirstName(CountryName);
	Shania.setFirstName(CountryName);
	George.setFirstName(CountryName);
	Merle.setLastName(*CountryLastName);
	Shania.setLastName(*CountryLastName);
	George.setLastName(*CountryLastName);
	Merle.setphoneNumber(refPhoneNumber);
	Shania.setphoneNumber(refPhoneNumber);
	George.setphoneNumber(refPhoneNumber);

	// New print outs

	cout << "First Name: " << ShaniaContact[0] << endl;
	cout << "Last Name: " << ShaniaContact[1] << endl;
	cout << "Phone Number: " << ShaniaContact[2] << endl;
	cout << "Email: " << ShaniaContact[3] << endl;
	cout << "" << endl;

	cout << "First Name: " << GeorgeContact[0] << endl;
	cout << "Last Name: " << GeorgeContact[1] << endl;
	cout << "Phone Number: " << GeorgeContact[2] << endl;
	cout << "Email: " << GeorgeContact[3] << endl;
	cout << "" << endl;

	cout << "First Name: " << MerleContact[0] << endl;
	cout << "Last Name: " << MerleContact[1] << endl;
	cout << "Phone Number: " << MerleContact[2] << endl;
	cout << "Email: " << MerleContact[3] << endl;
	cout << "" << endl;

	// Nothing changed for me.  The only reason I could think of is that the functions that I was looking to change
	// were looking for a string literal in "" and not a variable name.

		


	

	


}

