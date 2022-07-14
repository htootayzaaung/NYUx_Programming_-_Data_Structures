#include <iostream>
using namespace std;

int main()
{
    int Numeric;
    char ASCII;

    cout << "Enter a valid numeric value: " << endl;
    cin >> Numeric;

    ASCII = (char)Numeric;

    cout << "Equivalent ASCII value: " << ASCII << endl;

    return 0;
}