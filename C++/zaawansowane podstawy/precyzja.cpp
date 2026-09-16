#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    double pi = 3.1415926789012354765375426423325;
    cout << "Podaj wartosc precyzji: ";
    cin >> a;
    cout << setprecision(a) << pi << endl;
}
