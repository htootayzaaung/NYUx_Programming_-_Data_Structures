#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;

int main()
{
    int daysTravelled, fullWeeks, fullDays;

    cout << "Please enter the number of days you have travelled: " <<endl;
    cin >> daysTravelled;

    fullWeeks = daysTravelled / DAYS_IN_A_WEEK;
    fullDays = daysTravelled % DAYS_IN_A_WEEK;

    cout << "daysTravelled = " << daysTravelled << endl << "fullWeeks = " << fullWeeks << endl << "fullDays = " << fullDays << endl;
    return 0;
}