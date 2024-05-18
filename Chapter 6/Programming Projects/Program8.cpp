#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double power(double, double); // function prototypes

    int num1 = 8, num2 = 6;

    cout << num1 << " raised to the power of " << num2 << " is: "
         << power(num1, num2) << endl;

    return 0;
}

double power(double a, double b)
{
    return exp(b * log(a));
}