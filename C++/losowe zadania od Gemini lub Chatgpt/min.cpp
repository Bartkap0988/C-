#include <iostream>
#include <vector>
using namespace std;

int znajdzMinimum(vector <int>& T, int n)
{
    // Krok 1: Zak³adamy, ¿e pierwszy element jest najmniejszy
    int min = T[0];

    // Krok 2: Przechodzimy pêtl¹ przez pozosta³e elementy
    for (int i = 1; i < n; i++)
    {
        // Krok 3: Jeœli znajdziemy coœ wiêkszego...
        if (T[i] < min)
        {
            min = T[i]; // ...to to zapamiêtujemy!
        }
    }

    // Zwracamy znalezione minimum
    return min;
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
    cout << "Najmniejsza liczba to: " << znajdzMinimum(T, n) << endl;
    return 0;
}
