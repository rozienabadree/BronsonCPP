#include <iostream>
#include <cmath>
using namespace std;

double y(double x)
{
    return 3 * pow(x, 2) + 2 * x - 2;
}

double yDeriv(double x)
{
    return 6 * x + 2;
}

int main()
{
    const double TOLERANCE = 0.0000001;
    double approx, prevApprox;

    cout << "\nEnter an inital approximation: ";
    cin >> approx;
    do
    {
        prevApprox = approx;
        approx = prevApprox - (y(prevApprox)) / (yDeriv(prevApprox));
    } while (abs(prevApprox - approx) >= TOLERANCE);
    cout << "\nThe final approximation is: " << approx << endl;

    return 0;
}