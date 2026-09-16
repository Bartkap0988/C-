#include <iostream>
#include <vector>
#include <algorithm> // potrzebne do swap
using namespace std;

// Funkcja odwracaj¹ca tablicê w miejscu
void odwrocTablice(vector<int>& T, int n)
{
    int lewy = 0;
    int prawy = n - 1;

    while (lewy < prawy)
    {
        swap(T[lewy], T[prawy]);
        lewy++;
        prawy--;
    }
}

int main()
{
    vector<int> T;
    int n, elem;

    cout << "Podaj wartosc rozmiaru tablicy (wieksza od 0): ";
    while(!(cin >> n) || n <= 0)
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
            cout << "Podano bledne dane! Podaj liczbe calkowita: ";
        }
        T.push_back(elem);
    }

    // Wyœwietlamy oryginaln¹ tablicê
    cout << "\nOryginalna tablica: ";
    for (int i = 0; i < n; i++)
    {
        cout << T[i] << " ";
    }
    cout << endl;

    // Odwracamy tablicê
    odwrocTablice(T, n);

    // Wyœwietlamy odwrócon¹ tablicê
    cout << "Odwrócona tablica: ";
    for (int i = 0; i < n; i++)
    {
        cout << T[i] << " ";
    }
    cout << endl;

    return 0;
}
