#include <iostream>
using namespace std;

void getQuadrant(double angle, int& quadrant);     // function prototype

int main()
{
    double input;
    int quadrant;

    cout << "Please enter an angle: ";
    cin >> input;

    getQuadrant(input, quadrant);

    cout << "The quadrant is " << quadrant;

    return 0;
}

void getQuadrant(double angle, int& quadrant)
{
    if (angle > 0 && angle < 90)
        quadrant = 1;
    else if (angle > 90 && angle < 180)
        quadrant = 2;
    else if (angle > 180 && angle < 270)
        quadrant = 3;
    else if (angle > 270 && angle < 360)
        quadrant = 4;
    else
        quadrant = 0;
    
    return;
}