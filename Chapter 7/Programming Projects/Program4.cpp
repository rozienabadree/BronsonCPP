#include <iostream>
using namespace std;

int main()
{
    void maxMin(int, double[], double&, double&); // function prototype

    const int SIZE = 5;                         // could be any size
    double vals[] = {1.9, 0.75, 3.3, 1.1, 2.0}; // could be any array
    double max, min;
    int i;

    maxMin(SIZE, vals, min, max);

    cout << "This list is: " << endl;
    for (i = 0; i < SIZE; i++)
    {
        cout << vals[i] << "  ";
    }

    cout << "\n\nThe maximum value is: " << max << endl;
    cout << "The minimum value is: " << min << endl;

    return 0;
}

// show the values
void maxMin(int numvals, double vals[], double& min, double& max)
{
    int i;

    min = vals[0];
    max = vals[0];

    for (i = 1; i < numvals; i++)
    {
        if (min > vals[i])
            min = vals[i];
        if (max < vals[i])
            max = vals[i];
    }

    return;
}