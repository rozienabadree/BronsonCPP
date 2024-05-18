#include <iostream>
#include <cmath>
using namespace std;

const int SIZE = 14;

int main()
{
    double calcAvg(int[]);
    double variance(int[], double);

    int testvals[] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73};
    double average;
    average = calcAvg(testvals);

    cout << "The average is: " << average << endl;
    cout << "The variance is: " << variance(testvals, average) << endl;

    return 0;
}

double calcAvg(int vals[])
{
    int i;
    double avg = 0;

    for (i = 0; i < SIZE; i++)
    {
        avg = avg + vals[i];
    }

    avg = avg / SIZE;

    return avg;
}

double variance(int vals[], double avg)
{
    int i;
    double var = 0;

    for (i = 0; i < SIZE; i++)
    {
        var = pow((vals[i] - avg), 2) + var;
    }
    var = var / SIZE;
    return var;
}