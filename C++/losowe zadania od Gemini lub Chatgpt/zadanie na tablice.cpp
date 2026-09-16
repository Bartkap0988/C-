#include <iostream>
using namespace std;

int suma(int* tab, int n)
{
    int wynik_sumy = 0;

    for (int i = 0; i < n; i++)
    {
        // *tab daje nam wartoœæ pod aktualnym adresem
        wynik_sumy += *tab;

        // Przesuwamy wskaŸnik na nastêpny element w pamiêci
        tab++;
    }

    return wynik_sumy;
}
