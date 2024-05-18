#include <iostream>
using namespace std;

void check(int, double, double);    // function prototype

int main()
{
    int num1 = 5;
    double num2 = 5.01;
    double num3 = 10.012;

    check(num1, num2, num3);

    return 0;
}

void check(int a, double b, double c)
{
    cout << "The integer passed is " << a
         << " and the first double-precision passed is " << b
         << " and the second double-precision passed is " << c;

    return;
}