#include <iostream>
#include <string>
#include <cctype> // do tolower() lub isalpha()

using namespace std;

void liczLitery(const string& tekst, int& samogloski, int& spolgloski)
{
    samogloski = 0;
    spolgloski = 0;

    string sam = "aeiouyAEIOUY"; // zbiór samog³osek (ma³e i wielkie)

    for (char c : tekst)
    {
        // Sprawdzamy czy znak jest w ogóle liter¹
        if (isalpha(c))
        {
            // Jeœli znajdziemy znak w stringu "sam", to znaczy, ¿e to samog³oska
            if (sam.find(c) != string::npos)
            {
                samogloski++;
            }
            else
            {
                spolgloski++; // Skoro jest liter¹ i nie jest samog³osk¹, to musi byæ spó³g³osk¹!
            }
        }
    }
}

int main()
{
    string tekst;
    cout << "Wpisz cos: ";
    getline(cin, tekst);

    int sam = 0, spol = 0;
    liczLitery(tekst, sam, spol);

    cout << "Samoglosek: " << sam << endl;
    cout << "Spolglosek: " << spol << endl;

    return 0;
}
