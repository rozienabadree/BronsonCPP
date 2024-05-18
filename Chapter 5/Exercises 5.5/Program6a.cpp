#include <iostream>
using namespace std;

int main()
{
    const int MAXCOUNT = 5;
    int count;
    double number;
    double max_number = 0.0;

    for (count = 1; count <= MAXCOUNT; count++)
    {
        cout << "Please enter a number: ";
        cin >> number;

        if (number > max_number)
            max_number = number;
    }
    cout << "The max number is " << max_number << endl;

    return 0;
}