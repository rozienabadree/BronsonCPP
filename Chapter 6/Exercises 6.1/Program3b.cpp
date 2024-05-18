#include <iostream>
using namespace std;

void findAbs(double);       // function prototype

int main()
{
    double num1 = 0.01564;
    double num2 = -0.01564;

    findAbs(num1);
    findAbs(num2);

    return 0;
}

void findAbs(double x)
{
    if (x > 0)
        cout << x << endl;
    else
    {
        x = -x;
        cout << x << endl;
    }

    return;
}