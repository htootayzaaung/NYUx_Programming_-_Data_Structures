#include <iostream>
using namespace std;

int main()
{
    int numberOfStudents, currentGrade, average, sum = 0;

    cout << "Please enter the number of students in the class: " << endl;
    cin >> numberOfStudents;

    cout << "Enter the student's grades (seperated by a space): " << endl;

    for (int i = 0; i < numberOfStudents; i++)
    {
        cin >> currentGrade;
        sum += currentGrade;
    }

    average = (double)sum / double(numberOfStudents);

    cout << "Average: " << average << endl;

    return 0;
}