#include <iostream>
using namespace std;

int silnia(int n)
{
    if (n == 0 or n == 1) return 1;
    return n * silnia(n-1);
}

int fib(int f)
{
    if (f == 0) return 0;
    if (f == 1) return 1;
    return fib(f-1) + fib(f-2);
}

int main()
{
    int n, f;
    cout << "Podaj wartosc n i f: " << endl;
    cout << "n = ";
    cin >> n;
    cout << "f = ";
    cin >> f;
    cout << n << "! = " << silnia(n) << endl;
    cout << "fib = ";
    for (int i = 0; i <= f; i++)
    {
    cout << fib(i) << " ";
    }
    return 0;
}
