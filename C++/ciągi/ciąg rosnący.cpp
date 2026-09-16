#include <iostream>
#include <vector>
using namespace std;

bool malejacy(vector<int>& T, int n)
{
    for (int i = 0; i < n - 1; i++)
        if (T[i] >= T[i + 1]) return true;
    return false;
}

int main()
{
    int n, elementy;
    vector<int> T;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Podaj wartosc elementu T(" << i << "): ";
        cin >> elementy;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Podano błedne dane! ";
            continue;
        }
        T.push_back(elementy);
    }
    if (malejacy(T, n))
    {
    cout << "Ciag jest malejacy!\n";
    }
    else
    {
    cout << "Ciag nie jest malejacy!\n";
    }
    return 0;
}
