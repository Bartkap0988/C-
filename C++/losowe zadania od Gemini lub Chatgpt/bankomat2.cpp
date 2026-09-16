#include <iostream>
#include <cstdlib> // Biblioteka potrzebna dla system("cls")

using namespace std;

int main() {
    double saldo = 0;
    double kwota;
    int wybor;
    bool czyDziala = true;

    while (czyDziala) {
        // Czyszczenie ekranu dla porz¹dku (na Windowsie)
        system("cls");

        cout << "--- BANKOMAT WAKACYJNY 2026 ---" << endl;
        cout << "Aktualne saldo: " << saldo << " PLN" << endl;
        cout << "-------------------------------" << endl;
        cout << "1. Wplata" << endl;
        cout << "2. Wydatek" << endl;
        cout << "3. Stan konta" << endl;
        cout << "0. Wyjdz" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;

        switch (wybor) {
            case 1:
                cout << "Podaj kwote do wplaty: ";
                cin >> kwota;
                if (kwota > 0) {
                    saldo += kwota;
                    cout << "Wplacono " << kwota << " PLN." << endl;
                } else {
                    cout << "Bledna kwota!" << endl;
                }
                break;

            case 2:
                cout << "Podaj kwote do wydania: ";
                cin >> kwota;

                // Zastosowanie Twojej logiki warunkowej
                if (saldo <= 0) {
                    cout << "Brak srodkow! Twoje saldo wynosi 0 lub mniej." << endl;
                } else if (kwota > saldo) {
                    cout << "Za malo srodkow! Chcesz wydac " << kwota
                         << ", a masz tylko " << saldo << " PLN." << endl;
                } else if (kwota <= 0) {
                    cout << "Kwota wydatku musi byc wieksza od zera!" << endl;
                } else {
                    saldo -= kwota;
                    cout << "Wydatek udany. Pozostalo: " << saldo << " PLN." << endl;
                }
                break;

            case 3:
                cout << "Twoje saldo wynosi: " << saldo << " PLN." << endl;
                break;

            case 0:
                czyDziala = false;
                cout << "Zamykanie systemu. Milego wypoczynku!" << endl;
                break;

            default:
                cout << "Nieprawidlowy wybor!" << endl;
        }

        // Czekamy na reakcjê u¿ytkownika przed wyczyszczeniem ekranu
        cout << "\nNacisnij ENTER, aby kontynuowac...";
        cin.ignore();
        cin.get();
    }

    return 0;
}
