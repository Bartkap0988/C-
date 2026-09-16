#include <iostream>
using std::cout;

int main()
{
    int x = 5;
    int *p = &x;
    int& a = x;
    *p = 100;
    cout << x;
}
