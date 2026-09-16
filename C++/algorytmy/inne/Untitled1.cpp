#include <iostream>
using namespace std;

int nwd(int a, int b)
{
     while (true)
    {
        if (b == 0) break;
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Podaj wartość a i b: ";
    cin >> a >> b;
    int x = a;
    int y = b;
    cout << "NWD = " << nwd(a, b) << endl;
    cout << "NWW = " << (x*y)/nwd(a, b) << endl;
    return 0;
}
