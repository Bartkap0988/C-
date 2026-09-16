#include <iostream>
#include <vector>
using namespace std;

int znajdzMaksimum(vector <int>& T, int n)
{
    // Krok 1: Zak³adamy, ¿e pierwszy element jest najwiêkszy
    int maks = T[0];

    // Krok 2: Przechodzimy pêtl¹ przez pozosta³e elementy
    for (int i = 1; i < n; i++)
    {
        // Krok 3: Jeœli znajdziemy coœ wiêkszego...
        if (T[i] > maks)
        {
            maks = T[i]; // ...to to zapamiêtujemy!
        }
    }

    // Zwracamy znalezione maksimum
    return maks;
}

int main()
{
    vector<int> T;
    int n, elem;
    cout << "Podaj wartosc rozmiaru tablicy (wieksza od 0): ";
    while(!(cin >> n))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe wieksza od 0: ";
    }
    for (int i = 0; i < n; i++)
    {
        cout << "T(" << i << ") = ";
        while(!(cin >> elem))
        {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe rzeczywista: ";
        }
        T.push_back(elem);
    }
    cout << "Najwieksza liczba to: " << znajdzMaksimum(T, n) << endl;
    return 0;
}
