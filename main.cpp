#include <iostream>
#include "KsiazkaAdresowa.h"


using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkieDaneUzytkownika();
    int id = ksiazkaAdresowa.logowanieUzytkownika();

    return 0;
}
