#include <iostream>
using namespace std;

template <class T> // template prefix

T maximum(T value1, T value2, T value3) // header line
{
    T max;

    if (value1 > value2)
    {
        if (value1 > value3)
            max = value1;
        else
            max = value3;
    }
    else if (value2 > value3)
        max = value2;
    else
        max = value3;

    return max;
}

int main()
{
    int num1 = 9;
    int num2 = 5;
    int num3 = 4;
    double num4 = -11.2;
    double num5 = 8.2;
    double num6 = 1.2;

    cout << "The max among " << num1 << " " << num2 << " " << num3
         << " is: " << maximum(num1, num2, num3) << endl;
    cout << "The max among " << num4 << " " << num5 << " " << num6
         << " is: " << maximum(num4, num5, num6) << endl;

    return 0;
}