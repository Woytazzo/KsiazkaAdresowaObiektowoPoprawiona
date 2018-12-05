#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkieDaneUzytkownika()
{
    uzytkownikMenedzer.wypiszWszystkieDaneUzytkownika();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    int id = uzytkownikMenedzer.logowanieUzytkownika();
    return id;
}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}
