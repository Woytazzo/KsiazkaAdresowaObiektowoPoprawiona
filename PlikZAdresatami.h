#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Adresat.h"


using namespace std;

class PlikZAdresatami
{
const string nazwaPlikuZAdresatami;
public:
PlikZAdresatami(string PLIKZADRESATAMI) : nazwaPlikuZAdresatami(PLIKZADRESATAMI){};
};
#endif
