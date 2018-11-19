#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{
    string wpis;
    PlikZUzytkownikami plikZUzytkownikami;
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);



    public:
    void rejestracjaUzytkownika();
    Uzytkownik podajDaneNowegoUzytkownika();
    void wypiszWszystkieDaneUzytkownika();
    void wczytajUzytkownikowZPliku();
};

#endif
