#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"}; // deklaracji tablicy
    for (string car : cars) // pêtla for-each
    {
    cout << car << "\n";
    }
    cout << cars[2] << "\n"; // wyœwietla 3. element tablicy
    cout << cars.front() << "\n"; // wyœwietla 1. element tablicy
    cout << cars.back() << "\n"; // wyœwietla ostatni element tablicy
    cout << cars.at(1) << "\n"; // dostajemy dostêp do drugiego elementu tablicy
    cars.at(0) = "Opel"; // zmienia nam pierwszy element z Volvo na Opel; note: mo¿na te¿ cars[0] = "Opel"; cout << cars[0]
    cout << cars.at(0) << "\n"; // wyœwietla Opel zamiast Volvo
    cars.push_back("Tesla"); // dodaje nam Tesla na sam koniec tablicy
    cars.pop_back(); // usuwa nam ostatni element tablicy
    cout << cars.empty() << "\n"; // sprawdza czy tablica jest pusta
    /*
    0 - tablica nie jest pusta
    1 - tablica jest pusta
    */
    return 0;
}
