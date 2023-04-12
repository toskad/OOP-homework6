#pragma once
#include <string>
using namespace std;

class Osoba
{
private:
	string jmeno;
	string prijmeni;
	int vek;
public:
	Osoba();
	Osoba(string jmeno, string prijmeni, int vek);
	string getJmeno();
	string getPrijmeni();
	int getVek();
};

