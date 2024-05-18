#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 14;
    int grades[SIZE], i, total = 0;
    double deviation[SIZE], average;

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
    }

    return 0;
}