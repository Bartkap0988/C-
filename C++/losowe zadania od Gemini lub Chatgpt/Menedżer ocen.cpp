#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double srednia(const vector<double>& T)
{
    double suma = 0; // double zamiast int, ¿eby nie zgubiæ u³amkù
    for (double x : T)
    {
        suma += x; // poprawione z =+ na +=
    }
    return suma / T.size();
}

double mediana(vector<double> T) // UWAGA: tutaj celowo przekazujemy przez wartoœæ, bo sortujemy kopiê
{
    if (T.empty()) return 0;

    sort(T.begin(), T.end());

    int n = T.size();

    if (n % 2 != 0)
    {
        return T[n / 2];
    }
    else
    {
        return (T[n / 2 - 1] + T[n / 2]) / 2.0;
    }
}

int main()
{
    double ocena; // zmienione z "oceny" na pojedyncz¹ "ocena"
    vector<double> lista;
    int n;
    int ni = 0, cel = 0; // WA¯NE: inicjalizacja zmiennych na 0!

    cout << "Podaj wartosc rozmiaru tablicy: ";
    while(!(cin >> n) || n <= 0)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe naturaln¹ > 0: ";
    }

    cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "T(" << i << ") = ";
        while(!(cin >> ocena))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Podano bledne dane! Podaj liczbu: ";
        }
        lista.push_back(ocena);
    }

    double sred = srednia(lista);
    double med = mediana(lista);

    for (double x : lista)
    {
        if (x == 1)
        {
            ni++;
        }
        else if (x == 6) // poprawione, ¿eby liczy³o faktycznie szóstki, a nie ka¿d¹ inn¹ ocenê
        {
            cel++;
        }
    }

    cout << "\n--- PODSUMOWANIE ---\n";
    cout << "Srednia arytmetyczna liczb to: " << sred << endl;
    cout << "Najwieksza ocena to: " << *max_element(lista.begin(), lista.end()) << endl;
    cout << "Najmniejsza ocena to: " << *min_element(lista.begin(), lista.end()) << endl;
    cout << "Mediana to: " << med << endl;
    cout << "Ocen niedostatecznych (1) jest: " << ni << endl;
    cout << "Ocen celujacych (6) jest: " << cel << endl;

    return 0;
}
