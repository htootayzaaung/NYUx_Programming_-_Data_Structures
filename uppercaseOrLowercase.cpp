#include <iostream>
using namespace std;

int main()
{
    char alphabet;

    cout << "Enter an alphabet: ";
    cin >> alphabet;

    if ((alphabet >= 65) && (alphabet <= 90))
    {
        cout << "It's an uppercase!" << endl;
    }

    if ((alphabet >= 97) && (alphabet <= 122))
    {
        cout << "It's a lowercase!" << endl;
    }

    if ((alphabet >= 48) && (alphabet <= 57))
    {
        cout << "It's a digit!" << endl;
    }

    else
    {
        cout << "It's a symbol!" << endl;
    }

    return 0;
}