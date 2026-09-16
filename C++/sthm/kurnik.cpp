#include <iostream>
#include <random>

using namespace std;

random_device rd;
mt19937 gen(rd());

int main()
{
int wybor;
int jajko = 0;
int piskle = 0;
int kura = 0;
int kogut = 0;
while (true) {

uniform_int_distribution<> dist(1,6);
int los = dist(gen);

switch (los) {
case 1:
    cout << "Koniec gry!" << endl;
    return 0;
case 2:
    jajko++;
    cout << "Jajko! Masz: " << jajko << endl;
    break;
case 3:
    piskle++;
    cout << "Piskle! Masz: " << piskle << endl;
    break;
case 4:
    kura++;
    cout << "Kura! Masz: " << kura << endl;
    break;
case 5:
    kogut++;
    cout << "Kogut! Masz: " << kogut << endl;
    break;
case 6:
    int jajko = 0, piskle = 0, kura = 0, kogut = 0;
    cout << "Wszystko siê wyzerowa³o!" << endl;
    break;
}
}
}
