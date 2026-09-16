#include <iostream>
using namespace std;
int sil(int n)
{
    if (n == 0 || n == 1) return 1;
    return n * sil(n - 1);
}
int main()
{
    int n;
    cout << "Podaj wartoœæ n: ";
    cin >> n;
    cout << n << "! = " << sil(n) << endl;
    return 0;
}
