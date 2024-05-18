#include <iostream>
using namespace std;

void findMax(int, int, int&); // function prototype

int main()
{
    int firstnum, secnum, max;

    cout << "\nEnter a number: ";
    cin >> firstnum;
    cout << "Great! Please enter a second number: ";
    cin >> secnum;

    findMax(firstnum, secnum, max);
    cout << "\nThe maximum of the two numbers is " << max << endl;

    return 0;
}

void findMax(int x, int y, int& max)
{               // start of function body
    int maxnum; // variable declaration
    if (x >= y) // find the maximum number
        maxnum = x;
    else
        maxnum = y;
    
    max = maxnum;

    return; // return statement
}