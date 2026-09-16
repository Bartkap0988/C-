#include <iostream>
#include <string>
using namespace std;
enum dzien {poniedzialek, wtorek, sroda, czwartek, piatek, sobota, niedziela};

int main()
{
    string d;
    dzien dizal;
    cout << "Podaj dzien tygodnia: ";
    cin >> d;
    if (d == "poniedzialek") dzien dizal = poniedzialek;
    else if (d == "wtorek") dzien dizal = wtorek;
    else if (d == "sroda") dzien dizal = sroda;
    else if (d == "czwartek") dzien dizal = czwartek;
    else if (d == "piatek") dzien dizal = piatek;
    else if (d == "sobota") dzien dizal = sobota;
    else if (d == "niedziela") dzien dizal = niedziela;
    else {
    cout << "podano dzieñ z poza zakresu" << endl;
    }

    switch (dizal)
    {
    case poniedzialek:
    case wtorek:
    case sroda:
    case czwartek:
    case piatek:
    cout << "Dzien pracujacy" << endl;
    break;
    case sobota:
    case niedziela:
    cout << "Weekend" << endl;
    break;
    }
    return 0;
}
