#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
using namespace std;

class DataManager
{
public:
	DataManager();
	~DataManager();

	void display()
	{
		cout << left << setw(10) << "First Name";
		cout << setw(15) << "Last Name";
		cout << setw(15) << "Phone Number";
		cout << right << setw(30) << "Email Address";
		cout << endl;
		cout << string(70, '-') << endl;
	}

private:
	string firstName;
	string lastName;
	int phoneNumber;
	string email;

	vector<string> splitString(const string & text, char sep) {
		vector<string> tokens;
		istringstream ss(text);
		string field;

		while (getline(ss, field, sep)) {
			tokens.push_back(field);
		}
		return tokens;
	}

	void writeDataFile() {
		ofstream outDataFile("data.txt", ios::out);
		while (cin >> firstName >> lastName >> phoneNumber >> email)
		{
			outDataFile << firstName << '\t' << lastName << '\t' << phoneNumber << '\t' << email << endl;
		}

	}

	void readDataFile() {
		string line;
		ifstream inDataFile("data.txt", ios::in);
		while (!inDataFile.eof())
		{
			getline(inDataFile, line);
			vector<string> temp = splitString(line, '\t');

			if (temp.size() == 4)
			{
				string firstName = temp[0];
				string lastName = temp[1];
				int phoneNumber = stoi(temp[2]);
				string email = temp[3];
			}
		}
	}
};

