#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double triArea(int, int, int);

    int a, b, c;
    double area;

    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a value for b: ";
    cin >> b;
    cout << "Enter a value for c: ";
    cin >> c;

    area = triArea(a, b, c);
    if (area == -1)
        cout << "The lengths specified do not form a triangle" << endl;
    else
        cout << "The area of the triangle is: " << area << endl;

    return 0;
}

double triArea(int a, int b, int c)
{
    double s, sq;

    s = (a + b + c) / 2;
    sq = s * (s - a) * (s - b) * (s - c);

    if (sq < 0)
        return -1;
    else
        return sqrt(sq);
}