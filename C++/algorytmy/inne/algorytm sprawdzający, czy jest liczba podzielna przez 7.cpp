#include <iostream>
using namespace std;

bool szukaj(int T[], int n)
{
    for (int i = 0; i < n; i++)
        if (T[i] % 7 == 0) return true;
    return false;
}

int main()
{
    int T[50], n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;
    if (n > 50) n = 50;
    for (int i = 0; i < n; i++)
    {
        cout << "Podaj " << i + 1 << " element: ";
        cin >> T[i];
    }
    if (szukaj(T, n))
    {
        cout << "Jest liczba podzielna przez 7!\n";
    }
    else
    {
        cout << "Nie ma liczby podzielnej przez 7!\n";
    }
    return 0;
}
