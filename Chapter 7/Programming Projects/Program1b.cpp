#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 100;
    double grade[SIZE], sum = 0, average;
    int count, i = 0;

    do
    {
        cout << "Enter a grade: ";
        cin >> grade[i];
        sum = sum + grade[i];
        i++;
    } while (grade[i - 1] > 0);

    sum = sum - grade[i - 1];
    count = i - 1;
    average = sum / count;

    cout << "\nThe sum is: " << sum << endl;
    cout << "The average is: " << average << endl;

    for (i = 0; i < count; i++)
    {
        if (grade[i] < average)
            cout << "*";
        cout << grade[i];
        if (grade[i] >= 90.0 && grade[i] <= 100.0)
            cout << " A" << endl;
        else if (grade[i] >= 80.0 && grade[i] < 90.0)
            cout << " B" << endl;
        else if (grade[i] >= 70.0 && grade[i] < 80.0)
            cout << " C" << endl;
        else if (grade[i] >= 60.0 && grade[i] < 70.0)
            cout << " D" << endl;
        else
            cout << " F" << endl;
    }

    return 0;
}