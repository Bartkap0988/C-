#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> lista;
    int wybor, numer;
    string przedmiot;

    while(wybor != 0) {
        cout << "--- LISTA RZECZY ---" << endl;
        cout << "-------------------------------" << endl;
        cout << "1. Dodanie" << endl;
        cout << "2. Kasowanie" << endl;
        cout << "3. Wyswietlanie" << endl;
        cout << "0. Wyjdz" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;
        switch (wybor)
        {
        case 1:
            cout << "Podaj produkt: ";
            cin >> przedmiot;
            lista.push_back(przedmiot);
            break;
        case 2:
            cout << "Podaj element do skasowania (od 1 do " << lista.size() << "): ";
            cin >> numer;
            lista.erase(lista.begin() + numer - 1);
            break;
        case 3:
            cout << "Obecne elementy tablicy to: ";
            for (string x : lista)
            {
            cout << x << " ";
            }
            cout << endl;
            break;
        }
    }
    cout << "Koncze program!" << endl;
    return 0;
}
