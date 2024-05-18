#include <iostream>
using namespace std;

int main()
{
    const float DRAG_COEF = 0.26;
    const float AIRDENSITY = 0.0077;

    float area, velocity, drag_force;

    cout << "Enter the front area and velocity of the vehicle: ";
    cin >> area >> velocity;

    drag_force = (DRAG_COEF * area * AIRDENSITY * velocity * velocity) / 2;
    cout << "The drag force in lbs is: " << drag_force << endl;

    return 0;
}