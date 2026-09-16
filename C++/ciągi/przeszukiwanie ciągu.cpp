#include <iostream>
#include <vector>
using namespace std;

bool ciag(vector<double>& T, double cel)
{
    // 1. Dodajemy "wartownika" na koniec wektora
    T.push_back(cel);

    int i = 0;
    // 2. Szukamy bez sprawdzania rozmiaru – pêtla w koñcu natrafi na 'cel'
    while (T[i] != cel)
    {
        i++;
    }

    // Zapamiêtujemy rozmiar sprzed dodania wartownika (oryginalny rozmiar to T.size() - 1 po push_back)
    // Ale najproœciej sprawdziæ: jeœli i < T.size() - 1, to znaleŸliœmy element w oryginalnym wektorze
    size_t oryginalnyRozmiar = T.size() - 1;

    // Usuwamy wartownika z wektora, ¿eby przywróciæ go do stanu pocz¹tkowego
    T.pop_back();

    // Jeœli indeks 'i' jest mniejszy ni¿ oryginalny rozmiar, znaczy to, ¿e element faktycznie tam by³
    return i < oryginalnyRozmiar;
}

int main()
{
    vector<double> T;
    double cel;
    int n = 0;

    cout << "Podaj wartosc n (wieksza od 0): ";
    while (!(cin >> n) || n <= 0)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe wieksza od 0: ";
    }

    // Rezerwujemy miejsce, ¿eby wektor dzia³a³ sprawniej
    T.resize(n);

    cout << "Podaj elementy tablicy: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "T[" << i << "] = ";
        while (!(cin >> T[i]))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Podano bledne dane! Podaj liczbe rzeczywista: ";
        }
    }

    cout << "Podaj wartosc celu: ";
    while (!(cin >> cel))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj poprawna liczbe: ";
    }

    if (ciag(T, cel))
    {
        cout << "Znaleziono liczbe!" << endl;
    }
    else
    {
        cout << "Nie znaleziono liczby!" << endl;
    }

    return 0;
}
