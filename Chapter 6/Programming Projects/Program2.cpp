#include <iostream>
using namespace std;

int main()
{
    double FractionToDecimal(double, double); // function prototypes

    int num1 = 8, num2 = 6;

    cout << num1 << "/" << num2 << " is: "
         << FractionToDecimal(num1, num2) << endl;

    return 0;
}

double FractionToDecimal(double numerator, double denominator)
{
    return numerator / denominator;
}
