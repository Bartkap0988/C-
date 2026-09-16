#include <iostream>
using namespace std;

void zamien(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << "\n";
    cout << *b << "\n";
}

int main()
{
    int x, y;
    cout << "Podaj wartosc x i y: ";
    cin >> x >> y;
    zamien(&x, &y);
    return 0;
}
