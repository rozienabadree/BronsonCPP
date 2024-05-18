#include <iostream>
using namespace std;

int main()
{
    float results, total, average;

    const int MAXEXP = 4;
    int MAXTESTS;
    int i, j;

    for (i = 1; i <= MAXEXP; i++)
    {
        total = 0.0;

        cout << "Enter the total number of tests for this experiment: ";
        cin >> MAXTESTS;

        for (j = 1; j <= MAXTESTS; j++)
        {
            cout << "Please enter the results for this experiment: ";
            cin >> results;
            total += results;
        }
        average = total / MAXTESTS;
        cout << "The average for experiment " << i << " is " << average << endl;
    }

    return 0;
}