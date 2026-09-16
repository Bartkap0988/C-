#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void BubbleSort (vector<double>& T)
{
    size_t n = T.size();
    for (size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < n - i - 1; j++)
        {
        if (T[j] > T[j + 1])
            {
            swap(T[j], T[j + 1]);
            }
        }
    }
}

bool czyWszystkieZaliczone(const std::vector<double>& oceny)
{
        size_t n = oceny.size();
        for (size_t i = 0; i < n - 1; i++)
        {
        if (oceny[i] < 2.0)
            return false;
        }
        return true;
}

int main() {
    std::vector<double> oceny;
    double dane;
    cout << "Podaj elementy tablicy: ";
    while (cin >> dane)
    {
    oceny.push_back(dane);
    }
    if (czyWszystkieZaliczone(oceny)) {
        BubbleSort(oceny);
        for (double x : oceny)
            cout << x << " ";
    cout << endl;
    } else {
        std::cout << "Ktos nie zaliczyl!" << std::endl;
    }

    return 0;
}
