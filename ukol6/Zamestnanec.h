#pragma once
#include "Osoba.h"
class Zamestnanec : public Osoba
{
private:
	string firma;
	int vyplata;
public:
	Zamestnanec();
	Zamestnanec(string firma, int vyplata);
	Zamestnanec(string jmeno, string prijmeni, int vek);
	Zamestnanec(string jmeno, string prijmeni, int vek, string firma, int vyplata);
	string getFirma();
	int getVyplata();
};

