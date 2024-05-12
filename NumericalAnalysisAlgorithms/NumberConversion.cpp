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
            switch (reszta) {
                case 10:
                    liczba2 += 'A';
                    break;
                case 11:
                    liczba2 += 'B';
                    break;
                case 12:
                    liczba2 += 'C';
                    break;
                case 13:
                    liczba2 += 'D';
                    break;
                case 14:
                    liczba2 += 'E';
                    break;
                case 15:
                    liczba2 += 'F';
                    break;
            }
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