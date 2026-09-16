#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main ()
{
    string pass = "1234";
    string password;
    char option;
    cout << "Password: ";
    cin >> password;
    if (password != pass)
    {
    cout << "Sorry, but you've typed in a wrong password!";
    return 0;
    }
    do {
        cout << "Menu: +, -, *, /, ^, % (modulo), r (rooting), q (quit): ";
        cin >> option;

        switch (option) {
        case '+': {double a, b; cout << "Please type first number: "; cin >> a; cout << "Please type second number: "; cin >> b; cout << a + b << endl;}; break;
        case '-': {double a, b; cout << "Please type first number: "; cin >> a; cout << "Please type second number: "; cin >> b; cout << a - b << endl;}; break;
        case '*': {double a, b; cout << "Please type first number: "; cin >> a; cout << "Please type second number: "; cin >> b; cout << a * b << endl;}; break;
        case '/': {double a, b; cout << "Please type first number: "; cin >> a; cout << "Please type second number: "; cin >> b; if (b != 0) {cout << a / b << endl;} else {cout << "Error! You can't devide by 0!" << endl;} }; break;
        case '^': {double a, b; cout << "Please type first number: "; cin >> a; cout << "Please type second number: "; cin >> b; if (a == 0 && b == 0) {cout << pow(a, b) << endl;} else {cout << "Error: 0^0 is undefined" << endl;}}; break;
        case '%': {int a, b; cout << "Please type first number: "; cin >> a; cout << "Please type second number: "; if (b != 0) {cin >> b; cout << a % b << endl;} else {cout << "Error! Modulo by 0";}}; break;
        case 'r': {double a; int b; cout << "Please type first number: "; cin >> a; cout << "Please type second number: "; cin >> b; if (b == 0) {cout << "Error! There isn't a root 0!" << endl;}
        else if (a < 0 && ((b % 2)==0)) {cout << "Error! You can't root a negative number by a positive root!" << endl;} else {cout << pow(a, 1.0/b) << endl;} }; break;
        case 'q': return 0; break;
        default: {cout << "Unknown operator!" << "\n";}; break;
        }
    } while (option != 'q');

}
