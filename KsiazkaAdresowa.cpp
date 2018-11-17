#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika ()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    //PlikUzytkownicy.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik KsiazkaAdresowa::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do
    {
        cout << endl << "Podaj login: ";
        cin >> wpis;
        uzytkownik.ustawLogin(wpis);
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    cin >> wpis;
    uzytkownik.ustawHaslo(wpis);

    return uzytkownik;
}

int KsiazkaAdresowa::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool KsiazkaAdresowa::czyIstniejeLogin(string login)
{
    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end())
    {
        if (itr -> pobierzLogin() == login)
        {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
        else
            itr++;
    }
    return false;
}
