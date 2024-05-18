#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double TOLERANCE = 0.00001;
    double approx, prevApprox, approx2, prevApprox2;

    cout << "The equation is : 3x^2 + 2x - 2" << endl;
    cout << "\nEnter an inital approximation: ";
    cin >> approx;

    do
    {
        prevApprox = approx;
        approx = prevApprox - ((3 * pow(prevApprox, 2)) + (2 * prevApprox) - 2) / (6 * prevApprox + 2);
    } while (abs(prevApprox - approx) >= TOLERANCE);

    approx2 = -approx;

    do
    {
        prevApprox2 = approx2;
        approx2 = prevApprox2 - ((3 * pow(prevApprox2, 2)) + (2 * prevApprox2) - 2) / (6 * prevApprox2 + 2);
    } while (abs(prevApprox2 - approx2) >= TOLERANCE);

    cout << "\nThe final approximations are: " << approx
         << " and " << approx2 << endl;

    return 0;
}