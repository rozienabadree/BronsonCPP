#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 9;
    double slopes[SIZE] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};
    double max, min;
    int i;

    max = slopes[0];
    min = slopes[0];

    for (i = 1; i < SIZE; i++)
    {
        if (max < slopes[i])
            max = slopes[i];
        if (min > slopes[i])
            min = slopes[i];
    }

    cout << "The maximum value is " << max << endl;
    cout << "The minimum value is " << min << endl;

    return 0;
}