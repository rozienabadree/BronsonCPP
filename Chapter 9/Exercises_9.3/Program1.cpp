#include <iostream>
#include <string>
using namespace std;

int main()
{
    string message; // declare a string object

    cout << "Enter a string:\n";
    getline(cin, message);
    cout << "The string just entered is:\n" << message << endl;

    return 0;
}