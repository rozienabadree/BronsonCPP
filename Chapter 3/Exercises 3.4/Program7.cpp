#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, x, value;

    cout << "Enter the co-efficients of the polynomial: ";
    cin >> a >> b >> c >> x;

    value = a*(pow(x, 2)) + b*x + c;
    cout << "The value of the polynomial is " << value << endl;

    return 0;
}