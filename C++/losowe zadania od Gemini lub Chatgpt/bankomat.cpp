#include <iostream>
using namespace std;

int main() {
    double saldo = 0;
    int wybor;
    bool warunek = true;
    double kwota;

    while(warunek) {
        cout << "Co chcesz zrobiæ? " << "\n";
        cout << "0 - wyjscie" << "\n";
        cout << "1 - bankomat" << "\n";
        cout << "2 - wp³atomat" << "\n";
        cout << "3 - saldo konta" << "\n";
        cin >> wybor;
        switch(wybor)
        {
            case 0:
                warunek = false;
                cout << "Zamykanie systemu!";
                break;
            case 1:
                cout << "Podaj kwote do wydania: ";
                cin >> kwota;

    // 1. Sprawdzamy czy w ogóle mamy cokolwiek na koncie
                if (saldo <= 0) {
                cout << "Brak srodkow! Twoje saldo wynosi 0 lub mniej.\n";
                }
    // 2. Sprawdzamy czy wypłacana kwota nie przekracza tego co mamy
                else if (kwota > saldo) {
                cout << "Brak srodkow! Chcesz wyplacic " << kwota
                << ", a masz tylko " << saldo << " PLN.\n";
                }
    // 3. Jeśli przeszliśmy przez powyższe, znaczy że transakcja jest OK
                else {
                saldo -= kwota;
                cout << "Wyplata udana! Pozostalo: " << saldo << " PLN.\n";
                }
                break;
            case 2:
                cout << "Podaj kwote do wp³acenia: ";
                cin >> kwota;
                if (kwota < 0)
                    cout << "Kwota nie może być mniejsza 0!\n";
                else
                    saldo = saldo + kwota;
                break;
            case 3:
                cout << "Twoje saldo to: " << saldo << "\n";
                break;
        }
    }
    return 0;
}
