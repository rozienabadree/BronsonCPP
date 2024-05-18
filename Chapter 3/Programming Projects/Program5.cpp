#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    const double numAtoms = 1.1e50;
    const double BOLTZMANN = 1.38e-23;
    const double STEFAN_BOLTZMANN = 5.6703e-8;

    double radius, currentTemp, area, time;

    cout << "Input the current temperature and radius of the planet: ";
    cin >> currentTemp >> radius;

    area = 4 * 3.1416 * radius * radius;
    time = (numAtoms * BOLTZMANN) / (2 * 1 * STEFAN_BOLTZMANN * area * pow(currentTemp, 3));

    cout << "The time it took for the Earth to reach its current temperature is " << time;

    return 0;
}