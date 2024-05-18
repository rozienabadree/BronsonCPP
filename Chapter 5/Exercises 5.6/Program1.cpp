#include <iostream>
using namespace std;

int main()
{
    float results, total, average;

    const int MAXEXP = 4;
    const int MAXTESTS = 6;
    int i, j;

    for (i = 1; i <= MAXEXP; i++)
    {
        total = 0.0;
        for(j = 1; j <= MAXTESTS; j++)
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