#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int f;
    cout << "Podaj wartoœæ f: ";
    cin >> f;
    for (int i = 0; i < f; i++)
    {
        cout << fib(i) << endl;
    }
    cout << endl;
    return 0;
}
