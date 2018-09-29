#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using std::string;
#include <iostream>
class Contact
{
public:
	Contact() = default;

	Contact(const string &f, const string &l, unsigned p, const string &e) :
		firstName(f), lastName(l), phoneNumber(p), email(e) { }
	
	string getFirstName() { return firstName; }

	string getLastName() { return lastName; }

	unsigned getphoneNumber() { return phoneNumber; }

	string getemail() { return email; }
	
	void setFirstName(string fn);

	void setLastName(string ln);

	void setphoneNumber(unsigned pn);

	void setemail(string em);

private:
	string firstName;
	string lastName;
	unsigned phoneNumber;
	string email;
	
};
#endif
