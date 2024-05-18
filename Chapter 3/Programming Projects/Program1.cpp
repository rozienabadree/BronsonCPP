#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    float x1, x2, y1, y2, slope;

    cout << "Enter the point values in the following order: x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;

    slope = (y2 - y1) / (x2 - x1);
    cout << "The slope is : " << setw(6) << fixed << setprecision(2) << slope << endl;

    return 0;
}