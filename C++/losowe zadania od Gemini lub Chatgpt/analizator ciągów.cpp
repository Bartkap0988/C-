#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

double srednia(const vector<double>& T)
{
    if (T.empty()) return 0;
    double suma = 0; // Poprawiono z int na double
    for (double x : T)
    {
        suma = suma + x;
    }
    return suma / T.size(); // Poprawiono dzielenie przez T.size() zamiast 2.0
}

void sorting(vector<double>& T) // Dodano & ¿eby modyfikowaæ orygina³
{
    sort(T.begin(), T.end());
    T.erase(unique(T.begin(), T.end()), T.end());
    cout << "Po usunieciu elementow mamy: ";
    for (double x : T)
    {
        cout << x << " ";
    }
    cout << endl;
}

void counting(const vector<double>& T, int &p, int &np) // Dodano referencje & dla p i np
{
    p = 0;
    np = 0;
    for (double x : T)
    {
        if (fmod(x, 2.0) == 0)
        {
            p++;
        }
        else
        {
            np++;
        }
    }
}

int main()
{
    vector<double> T;
    int p = 0, np = 0, i = 0;
    double elem, cel;

    cout << "Podaj elementy tablicy (wpisz cokolwiek innego ni¿ liczbê, aby zakoñczyæ):" << endl;
    while(true)
    {
        cout << "T(" << i << ") = ";
        if(!(cin >> elem)) break;
        else {
            T.push_back(elem);
            i++;
        }
    }

    // Czyszczenie bufora po b³êdzie strumienia (zakoñczeniu pêtli)
    cin.clear();
    cin.ignore(1000, '\n');

    cout << "Podaj cel: ";
    while(!(cin >> cel))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe rzeczywista: ";
    }

    if (T.empty()) {
        cout << "Nie podano ¿adnych elementów!\n";
        return 0;
    }

    double sred = srednia(T);

    cout << "\nSrednia wynosi: " << sred << endl;
    cout << "Najwiekszy element to: " << *max_element(T.begin(), T.end()) << endl;
    cout << "Najmniejszy element to: " << *min_element(T.begin(), T.end()) << endl;

    sorting(T);
    counting(T, p, np);

    cout << "Liczb parzystych jest: " << p << endl;
    cout << "Liczb nieparzystych jest: " << np << endl;

    auto it = find(T.begin(), T.end(), cel);

    if (it != T.end()) {
        int indeks = distance(T.begin(), it);
        cout << "Znaleziono! Liczba jest na pozycji (indeksie): " << indeks << endl;
    } else {
        cout << "Nie ma takiej liczby w wektorze.\n";
    }
    return 0;
}
