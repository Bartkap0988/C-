#include <iostream>
using namespace std;
const int MAX = 100;

int main()
{
    int n, licznik = 0;
    double T[MAX];
    cout << "Podaj wartosc tablicy (1-100): ";
    while (!(cin >> n) || n <= 0 || n > 100)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane lub liczbe z poza zakresu 1-100!\n";
        cout << "Podaj liczbe rzeczywista: ";
    }
    if (n > 100) n = 100;
    for (int i = 0; i < n; i++)
    {
    cout << "Podaj " << i + 1 << ". element tablicy: ";
        while(!(cin >> T[i])){
            cout << "Blad! Wpisz liczbe rzeczywista: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (T[i] < 0 && T[i+1] >= 0) {
            licznik++;
        }
    }
    cout << "W ci¹gu dosz³o do " << licznik << " zmian!\n";
    return 0;
}
