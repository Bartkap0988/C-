#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1,5);
    int c = dist(gen);
    uniform_int_distribution<> dist(1,100);
    int d = dist(gen);
    cout << " " << endl;
    int a = 0, b;
    cout << "You have currently: " << c << " tries!" << endl;
    while (a < c)
    {
    cin >> b;
    if (b == d) {
    cout << "Congrats! You've guessed a correct number!\n";
    return 0;
    }
    a++;
    }

    cout << "Sorry, you've used to much tries! Correct answer was" << c << endl;
    return 0;
}
