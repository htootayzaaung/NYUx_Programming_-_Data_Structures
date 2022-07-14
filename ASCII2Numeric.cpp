#include <iostream>
using namespace std;

int main()
{
    char charASCII;
    int numericValue;

    cout << "Please enter a character: " << endl;
    cin >> charASCII;

    numericValue = (int)charASCII;
    cout << "Equivalent numericValue: " << numericValue << endl;

    return 0;
}