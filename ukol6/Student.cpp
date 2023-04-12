#include "Student.h"

Student::Student() : Osoba()
{
	this->skola = "Skola zivota";
}

Student::Student(string skola) : Osoba()
{
	this->skola = skola;
}

Student::Student(string jmeno, string prijmeni, int vek) : Osoba(jmeno, prijmeni, vek)
{
	this->skola = "Skola zivota";
}

Student::Student(string jmeno, string prijmeni, int vek, string skola) : Osoba(jmeno, prijmeni, vek)
{
	this->skola = skola;
}

string Student::getSkola()
{
	return this->skola;
}
