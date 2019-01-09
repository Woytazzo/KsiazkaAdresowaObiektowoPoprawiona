#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Adresat.h"
#include "UzytkownikMenedzer.h"
#include "PlikZUzytkownikami.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
PlikZAdresatami plikZAdresatami;
int idZalogowanegoUzytkownika;
MetodyPomocnicze metodyPomocnicze;
vector <Adresat> adresaci;
Adresat podajDaneNowegoAdresata();
void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

public:
AdresatMenedzer(string NAZWAPLIKUZADRESATAMI, int IDZALOGOWANEGOUZYTKOWNIKA): plikZAdresatami(NAZWAPLIKUZADRESATAMI){
        idZalogowanegoUzytkownika=IDZALOGOWANEGOUZYTKOWNIKA;
        plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);

        };
    void dodajAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();

};
#endif
