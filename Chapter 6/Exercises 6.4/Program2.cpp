#include <iostream>
#include <cmath>
using namespace std;

double distance(double, double, double, double);

int main()
{
    double x1, x2, y1, y2;

    cout << "Enter the values for x1, y1, x2, y2 in that order: ";
    cin >> x1 >> y1 >> x2 >> y2;

    cout << "The distance between (" << x1 << ", " << y1 << ") and ("
         << x2 << ", " << y2 << ") is: " << distance(x1, x2, y1, y2) << endl;

    return 0;
}

double distance(double x1, double x2, double y1, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}