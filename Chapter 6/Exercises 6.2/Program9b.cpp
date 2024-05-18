#include <iostream>
using namespace std;

double maxDeflect(double, char); // function prototype

int main()
{
    double len;
    char type;

    cout << "\nEnter the length of the beam in feet: ";
    cin >> len;

    cout << "Enter the type of beam ('f' for floor or\n"
         << " 'r' for roof) : ";
    cin >> type;
    cout << "\nThe maximum allowable deflection is: "
         << maxDeflect(len, type) << endl; // the function is called here

    return 0;
}

double maxDeflect(double length, char code)
{
    double max;
    if (code == 'f')
        max = length / 240;
    else
        max = length / 180;

    return max;
}