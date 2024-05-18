#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float number, root;

    cout << "Enter a number: ";
    cin >> number;

    root = sqrt(sqrt(number));
    cout << "The fourth root of the number is " << root;

    return 0;
}