#include <iostream>
using namespace std;

int main()
{
    float minorRadius, majorRadius, circumference;

    cout << "Enter the minor and major radii: ";
    cin >> minorRadius >> majorRadius;
    
    circumference = 1 - ((majorRadius * majorRadius)/(minorRadius * minorRadius));
    cout << "The circumference eccentricity of the ellipse is " << circumference << endl;

    return 0;
}