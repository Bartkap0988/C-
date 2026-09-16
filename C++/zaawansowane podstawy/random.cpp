#include <iostream>
#include <random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10);

    int random = dis(gen);
    int proby = 0;
    int odpowiedz = 0;

    cout << "Zgadnij liczbe od 1 do 10!\n";

    while (true)
    {
        cout << "Podaj liczbe: ";
        while(!(cin >> odpowiedz) || odpowiedz > 10 || odpowiedz < 1)
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Podano bledne dane! Podaj liczbe rzeczywista: ";
        }

        if (odpowiedz == random)
        {
            cout << "Brawo! Zgad³eœ w " << proby << " próbach!\n";
            break;
        }
        else
        {
            if (proby < 3)
            {
                cout << "Pud³o nie zgad³eœ!\n";
                proby++;
            }
            else
            {
                cout << "\nKoniec prób! Przegra³eœ. Szukana liczba to by³a: " << random << ".\n";
                break;
            }
        }
    }
    return 0;
}
