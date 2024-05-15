#include <iostream>
#include <string>

#include "NumberConversion.h"

using namespace std;

void input(int& number, int& base)
{
    cout << "Podaj liczbe calkowita w systemie dziesietnym:";
    cin >> number;
    cout << "Podaj podstawe:";
    cin >> base;
}

void convert(int number, int base, string& number2)
{
    while (number > 0)
    {
        int remainder = number % base;
        if (remainder <= 9) {
            number2 += to_string(remainder);
        }
        else {
            number2 += static_cast<char>('A' + remainder - 10);
        }
        number = number / base;
    }
    reverse(number2.begin(), number2.end());
}

void numberConversion()
{
    int number = 0;
    int base = 0;
    string number2 = "";
    input(number, base);
    convert(number, base, number2);
    cout << "Liczba " << number << " zapisana w systemie pozycyjnym o podstawie " << base << " to " << number2;
}