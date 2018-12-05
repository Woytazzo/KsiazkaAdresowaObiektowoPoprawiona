#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Adresat.h"
//#include "PlikZUzytkownikami.h"

using namespace std;

class AdresatMenedzer
{
vector <Adresat> adresaci;

void wyswietlDaneAdresata(Adresat adresat);
    public:
 void wyswietlWszystkichAdresatow();
};
#endif
