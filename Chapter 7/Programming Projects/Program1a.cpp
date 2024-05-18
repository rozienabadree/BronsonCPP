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
        cout << grade[i] << endl;
    }

    return 0;
}
