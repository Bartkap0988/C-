#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> tab;
    int liczba, i;

    while (cin >> liczba)
    {
        tab.push_back(liczba);
    }

    cout << "Teraz wczytalismy " << tab.size() << " elementy." << "\n";

    for(int x : tab)  // b¹dŸ for(int x = 0; x < tab.size(); x++)
    {
        cout << i << ". to: " << x << "\n";
        i++;
    }

    return 0;
}
