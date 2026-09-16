#include <iostream>
#include <algorithm>
using namespace std;

void odwroc(int* tab, int n)
{
    int *start = tab;
    int *koniec = tab + n - 1;
    while (start < koniec) {
        swap(*start, *koniec);
        start++;
        koniec--;
    }
}

int main()
{
    int tab[3] = {12, 34, 67}, n = 3;
    odwroc(tab, n);
    for (int i = 0; i < 3; i++)
    {
        cout << tab[i] << endl;
    }
    return 0;
}
