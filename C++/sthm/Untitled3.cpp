#include <iostream>
using namespace std;

void zamien(int *p, int &r) {
    int temp = *p;
    *p = r;
    r = temp;
}

int main()
{
    int a, b;
    cout << "Podaj wartosc a, b: ";
    cin >> a >> b;
    zamien(&a, b);
    cout << a << "\n" << b << "\n";
    return 0;
}
