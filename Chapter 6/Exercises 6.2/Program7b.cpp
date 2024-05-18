#include <iostream>
#include <iomanip> // needed for formatting
using namespace std;

double powerGen(double, double);

int main()
{

    double head, flowRate;

    cout << "Enter the water head (in meters): ";
    cin >> head;
    cout << "Enter the water's flow rate (in cubic meters/s): ";
    cin >> flowRate;

    cout << "The power generated is " << setiosflags(ios::fixed)
         << setprecision(2) << powerGen(head, flowRate) << " Watts" << endl;

    return 0;
}

double powerGen(double head, double flowRate)
{
    const double GRAV = 9.81;
    const double DENSITY = 998;

    return (DENSITY * GRAV * head * flowRate);
}