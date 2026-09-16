#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    vector<double> liczby;
    double liczba;
    cout << "Podaj liczby: ";
    while (cin >> liczba)
    {
    liczby.push_back(liczba);
    }

    cout << "Parzyste: ";
    for (double x : liczby)
        if (fmod(x, 2) == 0)
            cout << x << "\n";
    cout << "\n" << "Nieparzyste: ";
    for (double x : liczby)
        if (fmod(x, 2) != 0)
            cout << x << "\n";
    cout << "\n";

    cout << "Rozmiar tablicy to: " << liczby.size() << "\n";
    cout << "Pierwszy element: " << liczby.front() << "\n";
    cout << "Ostatni element: " << liczby.back() << "\n";

    return 0;
}
