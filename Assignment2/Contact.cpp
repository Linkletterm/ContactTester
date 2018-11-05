#include "pch.h"
#include "Contact.h"
#include <string>
using std::string;
#include <iostream>

Contact::Contact()
{
	this->firstName = "";
	this->lastName = "";
	this->phoneNumber = "";
	this->email = "";
}


Contact::Contact(const string &firstName, 
	const string &lastName, 
	const string &phoneNumber,
	const string &email) :
	firstName(firstName),
	lastName(lastName),
	phoneNumber(phoneNumber),
	email(email)
{
}
// Setters
void Contact::setFirstName(const string &firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(const string &lastName)
{
	this->lastName = lastName;
}

void Contact::setphoneNumber(const string &phoneNumber)
{
	if (sizeof(phoneNumber) < 10) 
		this->phoneNumber = ""; 
	else { 
		this->phoneNumber = phoneNumber; 
	}
}

void Contact::setemail(const string &email)
{
	this->email = email;
}

Contact::~Contact()
{
}
