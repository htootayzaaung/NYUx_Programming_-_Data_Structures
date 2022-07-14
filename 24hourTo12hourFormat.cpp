#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int hours, minutes;

    cout << "Enter time in 24-hour format:";
    scanf("%d:%d", &hours, &minutes);

    if (hours > 12)
    {
        hours = hours - 12;
        cout << hours << ":" << minutes << " pm" << endl; 
    }
    else
    {
        cout << hours << ":" << minutes << " am" << endl; 
    }
    

    return 0;
}