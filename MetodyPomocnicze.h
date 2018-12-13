#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class MetodyPomocnicze
{

public:
    MetodyPomocnicze();
    static string konwerjsaIntNaString(int liczba);
    string wczytajLinie();
};

#endif
