#include <iostream>
using namespace std;

int main()
{
    int quotient = 0;
    int remainder = 0;
    int divisor, dividend;

    cout << "Please enter a divisor and dividend: ";
    cin >> divisor >> dividend;

    while (divisor <= dividend)
    {
        dividend = dividend - divisor;
        quotient++;
        if (dividend < divisor)
            remainder = dividend;
    }
    cout << "The quotient is " << quotient
         << " and remainder is " << remainder;

    return 0;
}