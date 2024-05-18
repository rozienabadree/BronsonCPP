#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "The two numbers swapped are " << num1 << " and " << num2;

    return 0;
}