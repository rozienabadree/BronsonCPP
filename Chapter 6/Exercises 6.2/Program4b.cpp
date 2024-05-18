#include <iostream>
#include <cmath>
using namespace std;

double rightTriangle(double, double); // function prototype

int main()
{
    int a = 3, b = 5, c = 4;

    cout << "The hypotenuse of a right-triangle with sides: " << endl;
    cout << a << " and " << b << " is: " << rightTriangle(a, b) << endl;
    cout << a << " and " << c << " is: " << rightTriangle(a, c) << endl;

    return 0;
}

double rightTriangle(double a, double b)
{
    return sqrt((a * a) + (b * b));
}