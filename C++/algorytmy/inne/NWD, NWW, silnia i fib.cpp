#include <iostream>
using namespace std;

int NWDmod (int a, int b)
{
    while (true)
    {
    if (b == 0) break;
    int r = a % b;
    a = b;
    b = r;
    }
    return a;
}

int NWW (int a, int b)
{
    return a*b / NWDmod(a, b);
}

int sil(int n)
{
    if (n == 0 or n == 1) return 1;
    return n * sil(n-1);
}

int fib(int f)
{
    if (f == 0) return 0;
    if (f == 1) return 1;
    return fib(f-1) + fib(f-2);
}

int main()
{
    int a, b, n, f;
    cout << "Podaj wartoœæ a, b, n i f: ";
    cin >> a >> b >> n >> f;
    cout << "NWD (modulo) = " << NWDmod(a, b) << endl;
    cout << "NWW = " << NWW(a, b) << endl;
    cout << n << "! = " << sil(n) << endl;
    cout << "F" << "(" << f << ")" << " = ";
    for (int i = 0; i <= f; i++)
    {
    cout << fib(i) << " ";
    }
    return 0;
}
