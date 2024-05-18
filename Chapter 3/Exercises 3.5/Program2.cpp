#include <iostream>
using namespace std;

int main()
{
    double fahren, celsius;
    const double FACTOR = 5.0/9.0;
    cout << "Enter a temperature in degrees Fahrenheit: ";
    cin >> fahren;
    celsius = FACTOR * (fahren - 32.0);
    cout << "The equivalent Celsius temperature is "
         << celsius << endl;
    return 0;
}