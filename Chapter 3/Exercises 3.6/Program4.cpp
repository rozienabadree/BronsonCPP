#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.1416;
    float radius, distance, volume;

    cout << "Enter the radius and distance: ";
    cin >> radius >> distance;

    volume = PI * radius * radius * (200 - distance);
    cout << "The radius is " << radius << " and the distance is " << distance << " and the calculated 1volume is: " << volume << endl;

    return 0;
}