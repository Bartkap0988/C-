#include <iostream>
#include <cmath>
using namespace std;

void rownanie(double &a, double &b, double &c)
{
    double delta = (pow(b, 2.0)) - (4.0 * a * c);
    if (delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2.0 * a);
        double x2 = (-b - sqrt(delta)) / (2.0 * a);
        cout << "Sa dwa miejsca zerowe: x1 = " << x1 << ", x2 = " << x2 << " .\n";
    }
    else if (delta == 0)
    {
        double x0 = -b / (2.0 * a);
        cout << "Jest jedno miejsce zerowe: x0 = " << x0 << " .\n";
    }
    else
    {
        cout << "Brak miejsc zerowych!" << "\n";
    }
}

int main()
{
    double a, b, c;
    cout << "Podaj wartosc a, b i c: ";
    if(!(cin >> a >> b >> c)) {
        cout << "Podano zle dane!" << "\n";
        return 0;
    }
    if (a == 0)
    {
        cout << "Nie ma takiego rownania kwadratowego!" << "\n";
        return 0;
    }
    else
    {
        rownanie(a, b, c);
    }
    return 0;
}
