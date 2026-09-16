#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    int tab[6];
    cout << "Podaj wartoœci liczb: ";
    cin >> a >> b >> c >> d >> e;
    int* p = tab;
    int& ref = tab[a];
    ref = 999;

    cout << *p;
}
