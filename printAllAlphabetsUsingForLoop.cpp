#include <iostream>
using namespace std;

void printOnly4InARow(int a)
{
    if ((a % 4 == 0) && (a != 0))
    {
        cout << endl;
    }
}

void push2spacesToRight(int a)
{
    if (a == 24)
    {
        cout << "  ";
    }
}

void printAlphabet(char alphabet)
{
    cout << alphabet << " ";
}

int main()
{
    char a = 'a';
    char A = 'A';

    for (int i = 0; i < 26; i++)
    {
        printOnly4InARow(i);
        push2spacesToRight(i);
        printAlphabet(a);
        a++; //Implicit casting!
    }

    cout << "\n\n";

    for (int i = 0; i < 26; i++)
    {
        printOnly4InARow(i);
        push2spacesToRight(i);
        printAlphabet(A);
        A++; //Implicit casting!
    }

    cout << endl;
    return 0;
}