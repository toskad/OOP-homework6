#include "Zamestnanec.h"

Zamestnanec::Zamestnanec() : Osoba()
{
	this->firma = "Pracak";
	this->vyplata = 0;
}

Zamestnanec::Zamestnanec(string firma, int vyplata) : Osoba()
{
	this->firma = firma;
	this->vyplata = vyplata;
}

Zamestnanec::Zamestnanec(string jmeno, string prijmeni, int vek) : Osoba(jmeno, prijmeni, vek)
{
	this->firma = "Pracak";
	this->vyplata = 0;
}

Zamestnanec::Zamestnanec(string jmeno, string prijmeni, int vek, string firma, int vyplata) : Osoba(jmeno, prijmeni, vek)
{
	this->firma = firma;
	this->vyplata = vyplata;
}

string Zamestnanec::getFirma()
{
	return this->firma;
}

int Zamestnanec::getVyplata()
{
	return this->vyplata;
}

