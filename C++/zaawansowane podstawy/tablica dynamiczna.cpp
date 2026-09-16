#include <iostream>
using namespace std;
int main()
{
    int rozmiar;
    cout << "Podaj wartosc tablicy: ";
    cin >> rozmiar;
    int* tab = new int[rozmiar];
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "Podaj wartosc " << i + 1 << ". " << "element: ";
        cin >> *(tab + 1);
    }
    for (int i = 0; i < rozmiar; i++)
    {
        cout << *(tab + i);
        cout << endl;
    }
    delete[] tab;
}
