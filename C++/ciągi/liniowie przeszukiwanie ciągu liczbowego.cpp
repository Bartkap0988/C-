#include <iostream>
using namespace std;

bool szukaj (int T[], int n, int szukana)
{
    int i = 0;
    while (i < n && T[i] != szukana) i++;
    if (i == n) return false;
    return true;
}

int main()
{
    int T[50], n, szukana;
    cout << "Podaj liczbê elementów tablicy: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
    cout << "Podaj " << i + 1 << " element tablicy: ";
    cin >> T[i];
    }
    cout << "Podaj szukany element: ";
    cin >> szukana;
    if (szukaj(T, n, szukana))
    {
    cout << "Jest" << endl;
    }
    else
    {
    cout << "Nie ma" << endl;
    }
    return 0;
}
