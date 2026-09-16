#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main()
{
    double a, b;
    char op;

    while (true) {
        cout << "Podaj dzialanie: (lub wpisz q, aby wyjsc) ";

        cin >> a;

        // Obs³uga wpisania q
        if (cin.fail()) {
            cin.clear();
            char q;
            cin >> q;

            if (q == 'q')
                break;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Niepoprawne dane!" << endl;
            continue;
        }

        cin >> op >> b;

        double wynik;

        switch(op){

        case '+':
            wynik = a + b;
            break;

        case '-':
            wynik = a - b;
            break;

        case '*':
            wynik = a * b;
            break;

        case '/':
            if (b == 0) {
                cout << "Blad! Nie mozna dzielic przez 0!" << endl;
                continue;
            }
            wynik = a / b;
            break;

        case '^':
            if (a == 0 && b == 0) {
                cout << "Blad! 0^0 jest niejednoznaczne!" << endl;
                continue;
            }
            wynik = pow(a, b);
            break;

        case 'p': {   // <- BLOK potrzebny przy deklaracji zmiennej

            if (b == 0) {
                cout << "Blad! Stopien pierwiastka nie moze byc 0!" << endl;
                continue;
            }

            if (b != floor(b)) {
                cout << "Blad! Stopien pierwiastka musi byc liczba calkowita!" << endl;
                continue;
            }

            int stopien = (int)b;

            if (a < 0 && stopien % 2 == 0) {
                cout << "Blad! Nie mozna policzyc parzystego pierwiastka z liczby ujemnej!" << endl;
                continue;
            }

            wynik = pow(a, 1.0 / stopien);
            break;
        }

        default:
            cout << "Nieznany operator!" << endl;
            continue;
        }

        cout << "Wynik: " << wynik << endl;
    }

    return 0;
}
