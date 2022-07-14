#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;

    cout << "Please enter two numbers seperated by a space:" << endl;
    cin >> num1 >> num2;

    sum = num1 + num2;

    cout << num1 << " + " << num2 << " = " << sum << endl;

    return 0;
}