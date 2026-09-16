#include <iostream>
using namespace std;

// Teraz funkcja przyjmuje tablicê 'tab'
void analiza(int tab[], int *suma, double &srednia) {

    // 1. Poprawione sumowanie:
    *suma = tab[0] + tab[1] + tab[2];

    // 2. Poprawione liczenie œredniej (u¿ywamy *suma, ¿eby nie liczyæ ponownie):
    srednia = *suma / 3.0;
}

int main() {
    int tab[3];
    int s = 0;
    double sr = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Podaj wartosc " << i + 1 << ". element: ";
        if (!(cin >> tab[i])) return 0;
    }

    // 3. Poprawione wywo³anie: wysy³amy nazwê tablicy (czyli wskaŸnik)
    analiza(tab, &s, sr);

    cout << "Suma: " << s << endl;
    cout << "Srednia: " << sr << endl;

    if (sr > 10) {
        cout << "Duza srednia!" << endl;
    } else {
        cout << "Mala srednia!" << endl;
    }

    return 0;
}
