#include <iostream>
#include <random>
using namespace std;

int MaxProb = 5;

int main()
{
    int x, y, licznik = 1;
    cout << "Podaj wartosc x: ";
    cin >> x;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, x);
    int kostka = distr(gen);
    while (licznik <= MaxProb) {
    cout << "Podaj numer: ";
    cin >> y;
    if (y == kostka)
    {
        cout << "Brawo! Zgadles w " << licznik << " probach!" << endl;
        break;
    }
    else
        {
            if (licznik == MaxProb)
                cout << "Przegrales! Szukana liczba to: " << kostka << endl;
            else
                cout << "Pudlo, sprobuj jeszcze raz!" << endl;
        }
    licznik++;
    }
    return 0;
}
