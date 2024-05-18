#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int SIZE = 10;
    double nums[SIZE];
    double average, dev, total = 0, stdDev = 0;
    double newNums[SIZE];
    int i, cnt = 0;

    for (i = 0; i < SIZE; i++)
    {
        cout << "Enter a number: ";
        cin >> nums[i];
        total = total + nums[i];
    }

    average = total / SIZE;

    cout << "\nThe average is: " << average << endl;

    total = 0;
    for (i = 0; i < SIZE; i++)
    {
        dev = nums[i] - average;
        stdDev = stdDev + pow(dev, 2);
        if (dev <= 4.0)
        {
            newNums[cnt] = nums[i];
            total = total + newNums[cnt];
            cnt++;
        }
    }
    stdDev = sqrt(stdDev / (SIZE - 1));
    cout << "The standard deviation is: " << stdDev << endl;

    cout << "\nNumbers that are more than 4 deviations from the average are dropped " << endl;

    average = total / cnt;
    cout << "\n\nThe new average is: " << average << endl;

    stdDev = 0;
    for (i = 0; i < cnt; i++)
    {
        stdDev = stdDev + pow(newNums[i] - average, 2);
    }

    stdDev = sqrt(stdDev / (cnt - 1));
    cout << "The new standard deviation is: " << stdDev << endl;

    return 0;
}
