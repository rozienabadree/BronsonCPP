#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float E, r1, r2, p2, I, v2;

    cout << "Enter the values for E, r1, and r2 in that order: ";
    cin >> E >> r1 >> r2;

    I = E / (r1 + r2);
    v2 = I * r2;
    p2 = I * v2;

    cout << "The voltage drop is " << v2 << " volts and the power delivered is " << p2 << " watts.";

    return 0;
}