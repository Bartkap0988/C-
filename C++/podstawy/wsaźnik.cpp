#include <iostream>
using namespace std;
int main()
{
    int a = 9;
    int* p = &a;
    cout << *p;
    return *p;
}
