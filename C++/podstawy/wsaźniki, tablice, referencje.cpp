#include <iostream>
using namespace std;
int main()
{
    int oryginal = 10;
    int &ksywka = oryginal;
    ksywka = ksywka + 5;
    cout << ksywka;
}
