#include <iostream>
using namespace std;
const int MAX = 100;

bool szukaj(double T[], int n)
{
    for (int i = 0; i < n; i++)
        if (T[i] <= 5) return false;
    return true;
}

int main()
{
    double T[MAX];
    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;
    while(cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Podano niepoprawne dane! Podaj liczbe rzeczywista: ";
            cin >> n;
        }
    if (n > 100) n = 100;
    for (int i = 0; i < n; i++)
    {
        cout << "Podaj " << i + 1 << " element tablicy: ";
        cin >> T[i];
        if(cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Podano niepoprawne dane!" << endl;
        }
    }
    if (szukaj(T, n))
    {
        cout << "Wszystkie elementy sa > 5!\n";
    }
    else
    {
        cout << "Nie wszystkie elementy sa > 5!\n";
    }
    return 0;
}
