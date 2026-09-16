#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void sitoEratostenesa(int n)
{
    vector<bool> sito(n + 1, true);
    sito[0] = sito[1] = false;

    for (int p = 2; p * p <= n; p++)
    {
        if (sito[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                sito[i] = false;
            }
        }
    }

    cout << "Liczby pierwsze do " << n << ": ";
    for (int p = 2; p <= n; p++)
    {
        if(sito[p])
        {
        cout << p << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Podaj wartosc n: ";
    while(!(cin >> n))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano bledne dane! Podaj liczbe rzeczywista: ";
    }
    sitoEratostenesa(n);
    return 0;
    //hehe
}
