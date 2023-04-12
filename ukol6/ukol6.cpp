// ukol6.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "StudentVSB.h"
#include "Zamestnanec.h"

using namespace std;

int main()
{
    Student s1 = Student();
    Student s2 = Student("VSB-TUO");
    Student s3 = Student("Adam", "Toska", 21);
    Student s4 = Student("Adam", "Toska", 21, "VSB-TUO");

    cout << "Trida: Student" << endl;

    cout << s1.getJmeno() << " " << s1.getPrijmeni() << " " << s1.getVek() << " " << s1.getSkola() << endl;
    cout << s2.getJmeno() << " " << s2.getPrijmeni() << " " << s2.getVek() << " " << s2.getSkola() << endl;
    cout << s3.getJmeno() << " " << s3.getPrijmeni() << " " << s3.getVek() << " " << s3.getSkola() << endl;
    cout << s4.getJmeno() << " " << s4.getPrijmeni() << " " << s4.getVek() << " " << s4.getSkola() << endl;

    cout << endl;

    StudentVSB v1 = StudentVSB();
    StudentVSB v2 = StudentVSB("Adam", "Toska", 21);

    cout << "Trida: StudentVSB" << endl;

    cout << v1.getJmeno() << " " << v1.getPrijmeni() << " " << v1.getVek() << " " << v1.getSkola() << endl;
    cout << v2.getJmeno() << " " << v2.getPrijmeni() << " " << v2.getVek() << " " << v2.getSkola() << endl;

    cout << endl;

    Zamestnanec z1 = Zamestnanec();
    Zamestnanec z2 = Zamestnanec("Kaufland", 25000);
    Zamestnanec z3 = Zamestnanec("Adam", "Toska", 21);
    Zamestnanec z4 = Zamestnanec("Adam", "Toska", 21, "Kaufland", 25000);

    cout << "Trida: Zamestnanec" << endl;

    cout << z1.getJmeno() << " " << z1.getPrijmeni() << " " << z1.getVek() << " " << z1.getFirma() << " " << z1.getVyplata() << ",-" << endl;
    cout << z2.getJmeno() << " " << z2.getPrijmeni() << " " << z2.getVek() << " " << z2.getFirma() << " " << z2.getVyplata() << ",-" << endl;
    cout << z3.getJmeno() << " " << z3.getPrijmeni() << " " << z3.getVek() << " " << z3.getFirma() << " " << z3.getVyplata() << ",-" << endl;
    cout << z4.getJmeno() << " " << z4.getPrijmeni() << " " << z4.getVek() << " " << z4.getFirma() << " " << z4.getVyplata() << ",-" << endl;

}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
