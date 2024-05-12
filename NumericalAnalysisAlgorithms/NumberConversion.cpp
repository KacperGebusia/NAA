#include <iostream>
#include <string>

#include "NumberConversion.h"

using namespace std;

void wczytaj(int& liczba, int& podstawa)
{
    cout << "Podaj liczbe calkowita w systemie dziesietnym:";
    cin >> liczba;
    cout << "Podaj podstawe:";
    cin >> podstawa;
}

void zamien(int liczba, int podstawa, string& liczba2)
{
    while (liczba > 0)
    {
        int reszta = liczba % podstawa;
        if (reszta <= 9) {
            liczba2 += to_string(reszta);
        }
        else {
            liczba2 += static_cast<char>('A' + reszta - 10);
        }
        liczba = liczba / podstawa;
    }
    reverse(liczba2.begin(), liczba2.end());
}

void numberConversion()
{
    int liczba = 0;
    int podstawa = 0;
    string liczba2 = "";
    wczytaj(liczba, podstawa);
    zamien(liczba, podstawa, liczba2);
    cout << "Liczba " << liczba << " zapisana w systemie pozycyjnym o podstawie " << podstawa << " to " << liczba2;
}