#include <iostream>
using namespace std;

int main()
{
    const int MAXCOUNT = 6;
    int count;
    float fahrenheit, celsius;
    
    for (count = 1; count <= MAXCOUNT; count++)
    {
        cout << "Please enter a Fahrenheit temperature to be converted to celsius: ";
        cin >> fahrenheit;

        celsius = 5.0 / 9.0 * (fahrenheit - 32.0);

        cout << "The temperature in Celsius is " << celsius << endl;
    }

    return 0;
}