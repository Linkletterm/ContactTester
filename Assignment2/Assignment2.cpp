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
#include "DataManager.h"

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

	

		


	

	


}

