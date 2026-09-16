#include <iostream>

using std::cout;

namespace ProducentA {
    double pobierzwartosc() {
        return 25.0;
    }
}

namespace ProducentB {
    double pobierzwartosc2() {
        return 6767.0;
    }
}

int main()
{
    using ProducentA::pobierzwartosc;
    using ProducentB::pobierzwartosc2;
    cout << pobierzwartosc();
    cout << "\n";
    cout << pobierzwartosc2();
    return 0;
}
