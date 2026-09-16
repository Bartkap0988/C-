#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }

    cout << "NWD = " << a << endl;
}
