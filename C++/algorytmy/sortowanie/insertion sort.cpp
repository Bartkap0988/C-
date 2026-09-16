#include <iostream>
#include <vector>
using namespace std;

void insertion(vector<double>& tab)
{
    size_t n = tab.size();
    for (size_t i = 1; i < n; i++)
    {
    double klucz = tab[i];
    int j = i - 1;

    while (j >= 0 && tab[j] > klucz)
    {
        tab[j + 1] = tab[j];
        j--;
    }

    tab[j + 1] = klucz;
    }
}

int main()
{
    vector<double> tab;
    double elem;
    size_t n;

    cout << "Podaj wartość rozmiaru tablicy: ";
    while (!(cin >> n) || n < 1)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe calkowita > 0: ";
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

    insertion(tab);

    cout << "Posortowana tablica: ";
    for (double x : tab)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
