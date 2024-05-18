#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 14;
    int grades[SIZE], i;
    double average, variance = 0, total = 0;
    double deviation[SIZE];

    for (i = 0; i < SIZE; i++) // students could also hardcode the
    {                          // given values into the array
        cout << "Enter a grade: ";
        cin >> grades[i];
        total = total + grades[i];
    }

    average = total / SIZE;
    cout << "\nThe average is: " << average << endl;
    cout << "GRADE   DEVIATION" << endl;

    for (i = 0; i < SIZE; i++)
    {
        deviation[i] = grades[i] - average;
        cout << grades[i] << "       " << deviation[i] << endl;
        variance = variance + deviation[i] * deviation[i];
    }

    variance = variance / SIZE;
    cout << "\nThe variance is: " << variance << endl;

    return 0;
}