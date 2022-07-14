#include <iostream>
using namespace std;

int main()
{
    int num, currentDigit;
    int sumDigits = 0, countDigits = 0;

    cout << "Enter a positive integer: " << endl;
    cin >> num;

    while()
    {
        currentDigit = num % 10;
        countDigits++;

        sumDigits += currentDigit;
        num /= 10;
    }



    return 0;
}