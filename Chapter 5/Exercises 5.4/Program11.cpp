#include <iostream>
#include <string>
#include <iomanip> // needed for formatting

using namespace std;

// A program to determine the Reynolds number and the type of flow

int main()
{
    double kmviscosity;
    double diameter = .1;
    double speed = .09;
    int reynolds;
    string type = " ";

    for (int i = 0; i < 4; i++)
    {
        // Prompt the user
        cout << "Enter the kinematic viscosity at 40 degrees celsius (kg/ms): ";
        cin >> kmviscosity;
        reynolds = (speed * diameter) / kmviscosity;
        if (reynolds < 2000)
        {
            type = "smooth (laminar)";
        }
        else if ((reynolds >= 2000) && (reynolds <= 3000))
        {
            type = "in transition";
        }
        else
        {
            type = "turbulent";
        }

        cout << "Reynolds number: " << reynolds << " " << type << endl;
    }

    cout << endl;

    return 0;
}