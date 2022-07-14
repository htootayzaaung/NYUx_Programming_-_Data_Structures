#include <iostream>
using namespace std;

int main()
{
    char lowercase, uppercase;

    cout << "Enter an uppercase alphabet: ";
    cin >> uppercase;

    lowercase = uppercase + 32; //Implicit casting

    cout << lowercase << endl;

    return 0;
}