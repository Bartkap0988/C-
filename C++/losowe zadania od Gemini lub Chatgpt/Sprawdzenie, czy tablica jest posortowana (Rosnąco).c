#include <iostream>
#include <vector>
using namespace std;

bool czyPosortowana(vector<int>& T)
{
    size_t n = T.size();
    for (int i = 0; i < n; i++)
        if (T[i] > T[i + 1]) return false;
    return true;
}

int main()
{
    vector<int> T;
    int n, elem;

    cout << "Podaj wartosc rozmiaru tablicy (wieksza od 0): ";
    while (!(cin >> n) || n < 1)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe calkowita wieksza od 0: ";
    }

    for (int i = 0; i < n; i++)
    {
        cout << "T(" << i << ") = ";
        while (!(cin >> elem))
        {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe rzeczywista: ";
        }
        T.push_back(elem);
    }

    if(czyPosortowana(T))
    {
        cout << "Tablica jest posortowana!\n";
    }
    else
    {
        cout << "Tablica nie jest posortowana!\n";
    }
    return 0;
}
