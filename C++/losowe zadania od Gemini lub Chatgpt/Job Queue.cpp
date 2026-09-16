#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    vector<string> kolejka_zadan = {"Zapisz stan", "Wczytaj tekstury", "Oblicz fizykê", "Renderuj klatkê"};

    while(!kolejka_zadan.empty()) {
        // 1. Wypisz aktualn¹ listê
        cout << "Aktualna kolejka: " << endl;
        for (string x : kolejka_zadan) {
            cout << "- " << x << endl;
        }

        // 2. Wykonaj pierwsze zadanie (zawsze indeks 0)
        cout << "Wykonywanie: " << kolejka_zadan[0] << endl;
        cout << "--------------------" << endl;

        // 3. Usuñ wykonane zadanie
        kolejka_zadan.erase(kolejka_zadan.begin());
    }

    cout << "Wszystkie zadania wykonane!" << endl;
    return 0;
}
