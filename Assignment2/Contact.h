#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using std::string;
#include <iostream>
class Contact
{
public:
	Contact(); // Default

	Contact(const string &firstName,
		const string &lastName,			// 4 parameter constructor
		const string &phoneNumber,
		const string &email);

	~Contact();
	
	// Getters
	
	string getFirstName() { return this->firstName; }

	string getLastName() { return this->lastName; }

	string getphoneNumber() { return this->phoneNumber; }

	string getemail() { return this->email; }
	
	// Setters
	
	void setFirstName(const string &);

	void setLastName(const string &);

	void setphoneNumber(const string &);

	void setemail(const string &);

private: // Variables
	string firstName;
	string lastName;
	string phoneNumber;
	string email;
	
};
#endif
