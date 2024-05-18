#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    float x1, x2, y1, y2, midpointx, midpointy;

    cout << "Enter the point values in the following order: x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;

    midpointx = (x2 + x1) / 2;
    midpointy = (y2 + y1) / 2;

    cout << "The x midpoint coordinate is: " << setw(6) << fixed << setprecision(2) << midpointx
         << "\nThe y midpoint coordinate is: " << setw(6) << fixed << setprecision(2) << midpointy;

    return 0;
}