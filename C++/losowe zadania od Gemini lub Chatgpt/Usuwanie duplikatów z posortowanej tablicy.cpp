#include <iostream>
#include <vector>
using namespace std;

void ciag(vector<int>& T)
{
    size_t i = 0;
    while (i + 1 < T.size())
    {
        if (T[i] == T[i + 1])
        {
            T.erase(T.begin() + i);
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    vector<int> T = {1, 2, 2, 3, 4, 4, 5};
    ciag(T);
    for (int x : T)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
