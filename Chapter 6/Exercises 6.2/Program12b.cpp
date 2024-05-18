#include <iostream>
using namespace std;

int whole(double); // function prototype

int main()
{
    double num1 = -4.23456;

    cout << "The int value of " << num1 << " is: "
         << whole(num1) << endl;

    return 0;
}

int whole(double num) // header line
{
    int val;
    val = num;

    return val;
}
