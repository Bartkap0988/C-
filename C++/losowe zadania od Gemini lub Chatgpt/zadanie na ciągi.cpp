#include <iostream>
#include <vector>
using namespace std;

bool ciag (vector<int>& predkosci)
{
    size_t n = predkosci.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (predkosci[i] >= predkosci[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> predkosci = {2, 5, 8, 12, 15};
    if (ciag(predkosci))
    {
    cout << "predkosc jest rosnaca!" << endl;
    }
    else
    {
    cout << "predkosc nie jest stala!" << endl;
    }
    return 0;
}
