#include <iostream>
#include <vector>
using namespace std;

int linear(const vector<double>& tab, double cel)
{
    size_t n = tab.size();
    for (size_t i = 0; i < n; i++)
    {
        if(tab[i] == cel)
        {
        return i;
        }
    }
    return -1;
}

int main()
{
    vector<double> tab;
    double elem, cel;
    size_t n;

    cout << "Podaj wartoœæ rozmiaru tablicy: ";
    while (!(cin >> n) || n < 1)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe calkowita > 0: ";
    }

    cout << "Podaj wartoœæ szukanego elementu tablicy: ";
    while (!(cin >> cel))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe rzeczywista: ";
    }

    cout << "Podaj elementy tablicy: ";
    for (int i = 0; i < n; i++)
    {
        cout << "T(" << i << ") = ";
        if(!(cin >> elem))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Podano bledne dane! Podaj liczbe rzeczywista: ";
        }
        tab.push_back(elem);
    }

    if(tab.empty())
    {
        cout << "Pusta tablica!" << endl;
        return 0;
    }

    int wynik = linear(tab, cel);

    if (wynik != -1)
        cout << "Liczba " << cel << " znajduje sie na indeksie: " << wynik << endl;
    else
        cout << "Liczby " << cel << " nie ma w tablicy." << endl;

    return 0;
}
