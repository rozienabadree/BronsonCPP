#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    cout << "The gcd of " << n1 << " and " << n2
         << " is: " << gcd(n1, n2);

    return 0;
}

int gcd(int n1, int n2) // please note students may implement this w/out
{                       // recursion
    int remainder;

    if (n1 > n2)
    {
        remainder = n1 % n2;
        if (remainder == 0)
            return n2;
        else
            return gcd(n2, remainder);
    }
    else
    {
        remainder = n2 % n1;
        if (remainder == 0)
            return n1;
        else
            return gcd(n1, remainder);
    }
}