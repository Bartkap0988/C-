#include <iostream>
#include <string>
using std::cout;

enum DzienTygodnia {Pon, Wt, Sr, Czw, Pt, Sob, Nd};

int main()
{
    std::string dzien1;
    std::cout << "Podaj dzien tygodnia: ";
    std::cin >> dzien1;
    DzienTygodnia dzien;
    if (dzien1 == "poniedzialek")
    {
    DzienTygodnia dzien = Pon;
    }
    else if (dzien1 == "wtorek")
    {
    DzienTygodnia dzien = Wt;
    }
    else if (dzien1 == "sroda")
    {
    DzienTygodnia dzien = Sr;
    }
    else if (dzien1 == "czwartek")
    {
    DzienTygodnia dzien = Czw;
    }
    else if (dzien1 == "piatek")
    {
    DzienTygodnia dzien = Pt;
    }
    else if (dzien1 == "sobota")
    {
    DzienTygodnia dzien = Sob;
    }
    else if (dzien1 == "niedziela")
    {
    DzienTygodnia dzien = Nd;
    }
    else
    {
    std::cout << "Nie ma takiego dnia!" << "\n";
    return 0;
    }

    switch(dzien)
    {
    case Pon: cout << "Dzis jest poniedzialek!" << "\n"; break;
    case Wt: cout << "Dzis jest wtorek!" << "\n"; break;
    case Sr: cout << "Dzis jest sroda!" << "\n"; break;
    case Czw: cout << "Dzis jest czwartek!" << "\n"; break;
    case Pt: cout << "Dzis jest piatek!" << "\n"; break;
    case Sob: cout << "Dzis jest sobota!" << "\n"; break;
    case Nd: cout << "Dzis jest niedziela!" << "\n"; break;
    }
}
