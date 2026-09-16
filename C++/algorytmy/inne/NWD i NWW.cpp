#include <iostream>
using namespace std;
int NWD(int a, int b)
{
    while (b != 0)
    {
    int r = a % b;
    a = b;
    b = r;
    }
    return a;
}
int NWW(int a, int b)
{
    return (a*b) / NWD(a, b);
}

int main()
{
    int a, b;
    cout << "Podaj wartosc a i b: ";
    cin >> a >> b;
    cout << "NWD = " << NWD(a, b) << endl;
    cout << "NWW = " << NWW(a, b) << endl;
}
