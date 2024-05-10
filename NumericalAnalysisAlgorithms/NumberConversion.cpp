#include <iostream>
#include "NumberConversion.h"

using namespace std;

void wczytaj(int& liczba, int& podstawa)
{
    cout << "Podaj liczbe calkowita w systemie dziesietnym:";
    cin >> liczba;
    cout << "Podaj podstawe:";
    cin >> podstawa;
}

void zamien(int& liczba, int podstawa, int* liczba2, int& i)
{
    while (liczba > 0)
    {
        liczba2[i] = (liczba % podstawa);
        liczba = liczba / podstawa;
        i++;
    }
}

void numberConversion()
{
    int liczba = 0;
    int podstawa = 0;
    int liczba2[30];
    int i = 0;
    wczytaj(liczba, podstawa);
    cout << "Liczba " << liczba << " zapisana w systemie pozycyjnym o podstawie " << podstawa << " to ";
    zamien(liczba, podstawa, liczba2, i);
    int j = 0;
    i--;
    while (i >= 0)
    {
        cout << liczba2[j];
        i--;
        j++;
    }
}