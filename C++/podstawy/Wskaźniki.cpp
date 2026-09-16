#include <iostream>
using namespace std;

int main() {
    int tab[5] = {10, 20, 30, 40, 50};

    // Sposób 1: U¿ywaj¹c indeksu (klasyka)
    cout << "Indeksy: " << tab[2] << endl;

    // Sposób 2: U¿ywaj¹c wskaŸników (matematyka adresów)
    cout << "Wskaznik: " << *(tab + 2) << endl;

    // Mo¿esz te¿ przesuwaæ sam wskaŸnik:
    int* ptr = tab;
    cout << "Przesuniety wskaznik: " << *(ptr + 2) << endl;

    return 0;
}
