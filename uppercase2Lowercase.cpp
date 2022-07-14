#include <iostream>
using namespace std;

int main()
{   
    char lowercase, uppercase;

    cout << "Enter a lowercase alphabet: ";
    cin >> lowercase;

    uppercase = lowercase - 32; //Implicit casting

    cout << uppercase << endl;

    return 0;
}