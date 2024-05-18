#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double findAvg(int[], int);        // function prototype
double stdDev(int[], int, double); // function prototype

int main()
{
    const int NUMELS = 15;

    int values[NUMELS] = {68, 72, 78, 69, 85, 98, 95, 75, 77, 82, 84, 91, 89, 65, 74};
    double average, sDev;
    average = findAvg(values, NUMELS);      // call the function
    sDev = stdDev(values, NUMELS, average); // call the function
    cout << "The average of the numbers is "
         << setw(5) << setiosflags(ios::showpoint)
         << setprecision(4) << average << endl;

    cout << "The standard deviation of the numbers is "
         << setw(5) << setiosflags(ios::showpoint)
         << setprecision(4) << sDev << endl;

    return 0;
}
double findAvg(int nums[], int numel)
{
    int i;
    double sumnums = 0.0;

    for (i = 0; i < numel; i++) // calculate the sum of the grades
        sumnums = sumnums + nums[i];

    return (sumnums / numel); // calculate and return the average
}
double stdDev(int nums[], int numel, double av)
{
    int i;
    double sumdevs = 0.0;

    for (i = 0; i < numel; i++)
        sumdevs = sumdevs + pow((nums[i] - av), 2);

    return (sqrt(sumdevs / numel));
}