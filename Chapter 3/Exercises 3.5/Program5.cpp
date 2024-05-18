#include <iostream>
using namespace std;

int main()
{
    const float WEINCONSTANT = 2897;
    float degreesCelsius, maxWavelength, tempKelvin;

    cout << "Enter the temperature in Celseius: ";
    cin >> degreesCelsius;

    tempKelvin = degreesCelsius + 273.15;
    maxWavelength = WEINCONSTANT / tempKelvin;

    cout << "The wavelength at which the object radiates its max energry is " << maxWavelength;

    return 0;
}