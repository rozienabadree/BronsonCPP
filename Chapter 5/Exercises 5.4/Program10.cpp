#include <iostream>
#include <iomanip> // needed for formatting
#include <ios>     // for scientific notation with the visual c++ compiler
using namespace std;

// a program to compute kinematic viscosity

int main()
{
    double viscosity = 0;
    double density = 1;

    // set output formats for floating point numbers only
    cout << setiosflags(ios::fixed)

         //  << setiosflags(ios::scientific) // Uncomment this line for the gnu compiler
         << setprecision(4);

    for (int i = 0; i < 4; i++)
    {
        // Prompt the user
        cout << "Enter the viscosity at 40 degrees celsius (kg/ms)" << endl;
        cin >> viscosity;
        cout << "Enter the density (kg/m^3)" << endl;
        cin >> density;

        cout << "Kinematic viscosity (m^2/s): " << scientific << viscosity / density << endl;
        // cout << "Kinematic viscosity (m^2/s): " << viscosity/density << endl; // use this version with the gnu compiler
    }

    cout << endl;

    return 0;
}