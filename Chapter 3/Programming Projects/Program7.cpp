#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double height, speed, reboundHeight;
    const double GRAVITY = 9.81;            // can run again with gravity for Moon at 1.67 meters per second squared

    cout << "Please input the starting height: ";
    cin >> height;

    speed = sqrt(2.0*GRAVITY*height);
    reboundHeight = 2.0 / 3.0 * speed;
    cout << reboundHeight << endl;

    cout << "The first impact speed and rebound height are " << speed << " and " << reboundHeight << endl;
    
    height = reboundHeight;
    speed = sqrt(2.0 * GRAVITY * height);
    reboundHeight = 2.0 / 3.0 * speed;
    cout << "The second impact speed and rebound height are " << speed << " and " << reboundHeight << endl;

    height = reboundHeight;
    speed = sqrt(2.0 * GRAVITY * height);
    reboundHeight = 2.0 / 3.0 * speed;
    cout << "The third impact speed and rebound height are " << speed << " and " << reboundHeight << endl;

    return 0;
}