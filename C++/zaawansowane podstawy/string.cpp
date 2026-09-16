#include <iostream>
#include <string>
#include <cmath>
#include <sstream>   // do konwersji string -> liczba
using namespace std;

int main() {
    string dzialanie;   // np. "5 + 3"

    cout << "Podaj dzialanie (np. 5 + 3): ";
    getline(cin, dzialanie);   // wczytuje ca³¹ linijkê z operatorem i liczbami

    // zmienne do przechowania liczb i operatora
    double a, b;
    char op;

    // konwersja string -> liczby i operator
    stringstream ss(dzialanie);
    ss >> a >> op >> b;

    // wynik
    double wynik;

    switch(op) {
        case '+': wynik = a + b; break;
        case '-': wynik = a - b; break;
        case '*': wynik = a * b; break;
        case '/':
            if (b != 0)
                wynik = a / b;
            else {
                cout << "Blad: dzielenie przez 0!" << endl;
                return 1;
            }
            break;
            case '^':
            if (a != 0 && b != 0)
                wynik = pow(a,b);
            else {
                cout << "Blad: 0^0 jest niejednoznaczne!" << endl;
                return 1;
            }
            break;
             case 'p':
            if (a > 0 && b != 0)
                wynik = pow(a, 1.0/b);
            else if (a < 0 and fmod((b%2)==0)) {
                cout << "Blad: Nie mo¿na pierwiastkowac liczbe ujemna przez pierwiastek dodatniego stopnia!" << endl;
                return 1;
            }
            else if (b == 0) {
                cout << "Blad: Nie ma pierwiastka o wartosci 0!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Nieznany operator!" << endl;
            return 1;
    }

    cout << "Wynik: " << wynik << endl;

    return 0;
}
