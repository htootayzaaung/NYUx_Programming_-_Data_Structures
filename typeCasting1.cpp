#include <iostream>
using namespace std;

int main()
{
    int x1, x2;
    double y1, y2;

    x1 = 6;
    y1 = 6.7;

    y2 = (double) 6;
    x2 = (int) 6.7;

    cout << "y2 = " << y2 << endl;
    cout << "x2 = " << x2 << endl;
    
    return 0;
}