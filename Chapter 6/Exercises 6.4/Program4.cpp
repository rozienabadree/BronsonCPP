#include <iostream>
#include <cmath>
using namespace std;

void viscDen(char, double&, double&); // function prototype

int main()
{
    char type;
    double viscosity, density;

    cout << "Enter the type of fluid ('e' for Ethyl alcohol, 'm' for methyl alcohol, or 'p' for Propyl alcohol): ";
    cin >> type;
    viscDen(type, viscosity, density);

    cout << "\nThe viscosity is: " << viscosity << endl;
    cout << "The density is: " << density << endl;

    return 0;
}

void viscDen(char type, double &viscosity, double &density)
{
    if (type == 'e')
    {
        viscosity = 2.29e5;
        density = 1.527;
    }
    else if (type == 'm')
    {
        viscosity = 1.17e5;
        density = 1.531;
    }
    else if (type == 'p')
    {
        viscosity = 4.01e5;
        density = 1.556;
    }
    return;
}