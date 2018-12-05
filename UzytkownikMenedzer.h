#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Uzytkownik.h"
#include "Adresat.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{
    string wpis;
    PlikZUzytkownikami plikZUzytkownikami;
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    vector <Adresat> adresaci;
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

    public:
        UzytkownikMenedzer(string nazwaPlikuZUzytkownikami): plikZUzytkownikami(nazwaPlikuZUzytkownikami){};
    void rejestracjaUzytkownika();
    Uzytkownik podajDaneNowegoUzytkownika();
    void wypiszWszystkieDaneUzytkownika();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    void wylogowanieUzytkownika();
};

#endif
