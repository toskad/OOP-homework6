#pragma once
#include "Osoba.h"
class Student : public Osoba
{
private:
	string skola;
public:
	Student();
	Student(string skola);
	Student(string jmeno, string prijmeni, int vek);
	Student(string jmeno, string prijmeni, int vek, string skola);
	string getSkola();
};

