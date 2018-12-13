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

using namespace std;

class AdresatMenedzer
{
PlikZAdresatami plikZAdresatami;
int idZalogowanegoUzytkownika;

public:
AdresatMenedzer(string NAZWAPLIKUZADRESATAMI, int IDZALOGOWANEGOUZYTKOWNIKA): plikZAdresatami(NAZWAPLIKUZADRESATAMI){
        idZalogowanegoUzytkownika=IDZALOGOWANEGOUZYTKOWNIKA;
        //cout<<"ID: "<<idZalogowanegoUzytkownika<<endl;
        };
};
#endif
