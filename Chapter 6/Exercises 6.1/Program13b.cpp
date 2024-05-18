#include <iostream>
using namespace std;

template <class T> // template prefix
int whole(T value) // header line
{
    return (int)value;
}

int main()
{
    char letter = 'E';
    int num1 = -4;
    double num2 = -4.23456;

    cout << "The int value of " << letter << " is: "
         << whole(letter) << endl;
    cout << "The int value of " << num1 << " is: "
         << whole(num1) << endl;
    cout << "The int value of " << num2 << " is: "
         << whole(num2) << endl;

    return 0;
}