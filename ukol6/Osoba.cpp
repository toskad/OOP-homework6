#include "Osoba.h"

Osoba::Osoba()
{
	this->jmeno = "Jan";
	this->prijmeni = "Novak";
	this->vek = 42;
}

Osoba::Osoba(string jmeno, string prijmeni, int vek)
{
	this->jmeno = jmeno;
	this->prijmeni = prijmeni;
	this->vek = vek;
}

string Osoba::getJmeno()
{
	return this->jmeno;
}

string Osoba::getPrijmeni()
{
	return this->prijmeni;
}

int Osoba::getVek()
{
	return this->vek;
}
