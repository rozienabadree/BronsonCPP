#include <iostream>
using namespace std;

int main()
{
    int value;

    // value1 = valid integer, value2 = double precision #, value 3 = character, value4 = 12e4
    cout << "Please enter a value: ";
    cin  >> value;

    cout << "The value you entered is " << value;

    return 0;
}