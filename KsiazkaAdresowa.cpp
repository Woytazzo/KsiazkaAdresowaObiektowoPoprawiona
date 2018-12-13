#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkieDaneUzytkownika()
{
    uzytkownikMenedzer.wypiszWszystkieDaneUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
       adresatMenedzer = new AdresatMenedzer(nazwaPlikuZAdresatami, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}
//void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
//{
  //  adresatMenedzer.wyswietlWszystkichAdresatow();
//}
