#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string nazwaPlikuZAdresatami;
    char wybierzOpcjeZMenuUzytkownika();
    char wczytajZnak();
    char wybierzOpcjeZMenuGlownego();
    void rejestracjaUzytkownika();
    void wypiszWszystkieDaneUzytkownika();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();
    void edytujAdresata();
    void menuUzytkownika();
    void menuGlowne();

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string NAZWAPLIKUZADRESATAMI)
    : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};

    ~KsiazkaAdresowa()
    {delete adresatMenedzer;    }

    void menuKsiazkiAdresowej();
};

#endif
