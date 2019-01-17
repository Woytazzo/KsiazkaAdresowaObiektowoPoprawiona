#include <iostream>
#include "KsiazkaAdresowa.h"


using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");



    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    ksiazkaAdresowa.usunAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    ksiazkaAdresowa.edytujAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    return 0;
}
