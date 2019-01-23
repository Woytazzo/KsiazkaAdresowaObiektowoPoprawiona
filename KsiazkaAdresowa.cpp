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

void KsiazkaAdresowa::dodajAdresata()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
        adresatMenedzer->dodajAdresata();
    else{
        cout<<"Zaloguj sie na swoje konto"<<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
        adresatMenedzer->wyswietlWszystkichAdresatow();
    else{
        cout<<"Zaloguj sie na swoje konto"<<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
        adresatMenedzer->wyszukajAdresatowPoImieniu();
    else{
        cout<<"Zaloguj sie na swoje konto"<<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
        adresatMenedzer->wyszukajAdresatowPoNazwisku();
    else{
        cout<<"Zaloguj sie na swoje konto"<<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::usunAdresata()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
        adresatMenedzer->usunAdresata();
    else{
        cout<<"Zaloguj sie na swoje konto"<<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::edytujAdresata()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
        adresatMenedzer->edytujAdresata();
    else{
        cout<<"Zaloguj sie na swoje konto"<<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::menuUzytkownika()
{
 char wybor = wybierzOpcjeZMenuUzytkownika();

        switch (wybor)
        {
        case '1':
            dodajAdresata();
            break;
        case '2':
            wyszukajAdresatowPoImieniu();
            break;
        case '3':
            wyszukajAdresatowPoNazwisku();
            break;
        case '4':
            wyswietlWszystkichAdresatow();
            break;
        case '5':
            usunAdresata();
            break;
        case '6':
            edytujAdresata();
            break;
        case '7':
            zmianaHaslaZalogowanegoUzytkownika();
            break;
        case '8':
            wylogowanieUzytkownika();
            break;
        }
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wczytajZnak()
{
    string wejscie = "";
    char znak  = {0};

    while (true)
    {
        getline(cin, wejscie);

        if (wejscie.length() == 1)
        {
            znak = wejscie[0];
            break;
        }
        else if (wejscie.length() > 1)
        cout << "To nie jest pojedynczy znak. Wpisz ponownie." << endl;
    }
    return znak;
}

void KsiazkaAdresowa::menuGlowne()
{
   char wybor = wybierzOpcjeZMenuGlownego();
        switch (wybor)
        {
        case '1':
            rejestracjaUzytkownika();
            break;
        case '2':
            logowanieUzytkownika();
            break;
        case '9':
            exit(0);
            break;
        default:
            cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
            system("pause");
            break;
        }
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = wczytajZnak();

    return wybor;
}

void KsiazkaAdresowa::menuKsiazkiAdresowej()
{
    while(true)
    {
        if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
            menuUzytkownika();
        else
            menuGlowne();
    }
}
