#include <iostream>
#include <memory>
#include <string>

struct Postac {
    std::string nazwa;
    int poziom;

    Postac(std::string n, int p) : nazwa(n), poziom(p) {
    std::cout << "Stworzono postac: " << nazwa << std::endl;
    }

    ~Postac() {
        std::cout << "Usunieto postac: " << nazwa << std::endl;
    }
};

void przejmijPostac(std::unique_ptr<Postac> p)
{
    std::cout << "Przejmuje wladze nad: " << p->nazwa << '\n';
}

int main()
{
    std::unique_ptr<Postac> bohater = std::make_unique<Postac>("Longhorn", 50);

    std::cout << "Bohater: " << bohater->nazwa << " (lvl " << bohater->poziom << ")" << std::endl;

    przejmijPostac(std::move(bohater));

    return 0;
}
