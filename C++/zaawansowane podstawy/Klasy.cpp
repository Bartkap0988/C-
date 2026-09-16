#include <iostream>
#include <string>
using namespace std;

class KontoBankowe
{
    private:
        double StanKonta;

    public:

        KontoBankowe(double start)
        {
            StanKonta = start;
        }

        void wplac(double kwota)
        {
            StanKonta += kwota;
        }

        void wyswietlstan()
        {
            cout << "Stan Konta to: " << StanKonta << "PLN" << endl;
        }

        void wyplac(double kwota)
        {
            if (kwota <= StanKonta)
            {
            StanKonta -= kwota;
            }
            else
            {
            cout << "Blad! Za malo srodkow na koncie!" << endl;
            }
        }
};

int main()
{
    KontoBankowe mojeKonto(0.0);
    mojeKonto.wplac(100.0);
    mojeKonto.wplac(200.0);
    mojeKonto.wyswietlstan();
    mojeKonto.wyplac(150.0);
    mojeKonto.wyplac(500.0);
    return 0;
}
