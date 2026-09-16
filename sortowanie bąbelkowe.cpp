#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void BubbleSort (vector<double>& T)
{
    size_t n = T.size();
    for (size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < n - i - 1; j++)
        {
        if (T[j] > T[j + 1])
            {
            swap(T[j], T[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    vector<double> dane;
    double dane2;
    cout << "Podaj wartosc tablicy: ";
    while(!(cin >> n))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podane b³edne dane! Podaj poprawne dane: ";
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Podaj wartosc elementu T(" << i << "): ";
        cin >> dane2;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Podano b³edne dane! ";
            continue;
        }
        dane.push_back(dane2);
    }
    BubbleSort(dane);
    for (double x : dane)
        cout << x << " ";
    cout << endl;
    return 0;
}
