#include <iostream>
using namespace std;

int main()
{
    int input, output;

    cout << "Please input a number: ";
    cin >> input;

    cout << "The number in reverse is: ";
    do
    {
        output = input % 10;
        cout << output;
        input = input / 10;
    }
    while (input > 0);

    return 0;
}