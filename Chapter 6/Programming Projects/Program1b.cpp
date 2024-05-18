#include <iostream>
using namespace std;

double radius(double circumference); // function prototype
double area(double radius); // function prototype

int main()
{
    double circumference, r, a;

    cout << "Please enter the circumference of the circle: ";
    cin >> circumference;

    r = radius(circumference);
    a = area(r);
    cout << "The radius of the circle is " << r << " and the its area is " << a << "." << endl;

    return 0;
}

double radius(double circumference)
{
    return (circumference / (2 * 3.1416));
}

double area(double radius)
{
    return (3.1416 * radius * radius);
}