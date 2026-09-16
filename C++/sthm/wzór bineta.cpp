#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    const double phi = (1 + sqrt(5))/2;
    const double psi = (1 - sqrt(5))/2;
    cout << "Podaj wartosc n: ";
    cin >> n;
    cout << "F" << "(" << n << ")" << " = " << round((pow(phi, n) + pow(psi, n)) / sqrt(5)) << endl;
}
