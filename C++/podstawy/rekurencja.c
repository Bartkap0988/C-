#include <iostream>
using namespace std;

int funkcja(int n)
{
    if (n == 0 or n == 1) return 1;
    return n * funkcja(n-1);
}

int main()
{
    int n;
    cout << "Podaj wartoœæ n: ";
    cin >> n;
    cout << n << "! = " << funkcja(n) << endl;
    return 0;
}
