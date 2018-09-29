#include "pch.h"
#include "Contact.h"
#include <string>
using std::string;

Contact::Contact()
{
}


Contact::~Contact()
{
}

void Contact::setFirstName(string fn)
{
	fn = firstName;
}

void Contact::setLastName(string ln)
{
	ln = lastName;
}

void Contact::setphoneNumber(unsigned pn)
{
	if (sizeof(pn) < 10)
		pn = 0;
	else { 
		pn = phoneNumber; 
	}
}

void Contact::setemail(string em)
{
	em = email;
}
