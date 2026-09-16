#include <iostream>
using namespace std;

int suma(int a) {
    return a;
}

int suma(int a, int b) {
    return a * b;
}

double suma(double a, double b) {
    return a * b;
}

double suma(double a, double b, double c) {
    return a * b * c;
}

int main()
{
    double a, b, c;
    while (true)
    {
    cout << "Podaj wartosc liczb: ";
    if (!(cin >> a >> b >> c)) break;
    cout << suma(a) << "\n";
    cout << suma(a, b) << "\n";
    cout << suma( (double)a, (double)b, (double)c ) << "\n";
    cout << suma( (double)a, (double)b ) << "\n";
    }
    cout << "Bye Bye!";
    return 0;
}
