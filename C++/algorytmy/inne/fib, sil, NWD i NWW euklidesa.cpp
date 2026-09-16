#include <iostream>
using namespace std;

int NWD(int a, int b)
{
    while(true) {
    if (b == 0) break;
    int r = a % b;
    a = b;
    b = r;
    }
    return a;
}
int NWW(int a, int b)
{
    return a * b / NWD(a, b);
}
int sil(int n)
{
    if (n <= 1) return 1;
    return n * sil(n-1);
}
int fib(int f)
{
    if (f == 0) return 0;
    if (f == 1) return 1;
    return fib(f-1) + fib(f-2);
}
int main() {
    int a, b, n, f;
    cout << "Podaj wartosc a i b: ";
    cin >> a >> b;
    cout << "NWD" << "(" << a << ", " << b << ") = " << NWD(a, b) << endl;
    cout << "NWW" << "(" << a << ", " << b << ") = " << NWW(a, b) << endl;
    cout << "Podaj wartosc n i f: ";
    cin >> n >> f;
    cout << n << "! = " << sil(n) << endl;
    for (int i = 0; i <= f; i++)
    {
    cout << fib(i) << " ";
    }
    return 0;
}
