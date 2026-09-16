#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y, dzialanie;
    cout << "Podaj wartosc x i y: ";
    cin >> x >> y;
    dzialanie = sqrt( (2 * sqrt(x + y)) / 20 + pow(y, 3) );
    cout << "W = " << dzialanie << endl;
    return 0;
}
