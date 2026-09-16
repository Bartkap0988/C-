#include <iostream>
#include <vector>
#include <random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 10);

    int sekret = distr(gen);
    int pokoj;
    vector<int> historia;
    while (1)
    {
        cout << "Skarb zostal schowany w pokoju od 1 do 10. Podaj numer pokoju: ";
        if(!(cin >> pokoj))
        {
            cout << "Blad podawania danych!" << "\n";
            break;
        }
        historia.push_back(pokoj);

        if (sekret == pokoj)
        {
            cout << "Gratki! Znalaz³eœ skarb!" << "\n";
            break;
        }
        cout << "Pudlo! Z³y pokoj!" << "\n";
    }

    cout << "Historia prob: ";
    for (int x : historia)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
