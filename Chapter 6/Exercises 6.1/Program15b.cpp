#include <iostream>
using namespace std;

template <class T> // template prefix
T square(T value)  // header line
{
    return (value * value);
}

int main()
{
    int num1 = 9;
    double num2 = 5.21;
    double num3 = 4.1234;

    cout << "The square of " << num1
         << " is: " << square(num1) << endl;
    cout << "The square of " << num2
         << " is: " << square(num2) << endl;
    cout << "The square of " << num3
         << " is: " << square(num3) << endl;

    return 0;
}