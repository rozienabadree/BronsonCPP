#include <iostream>
#include <string>
using namespace std;

#include <C:\\\Users\\Roziena Badree\\Documents\\CUNY\\Hunter_Grad\\CSci_79300_IndependentLearning\\C++ for Scientists and Engineers\\Chapter 9\Exercises_9.6\\dataChecks.cpp>
using namespace dataChecks;

int main()
{
    int value;
    cout << "Enter an integer value: ";
    value = getanInt();
    cout << "The integer entered is: " << value << endl;

    cin.ignore(); //  needed for MS C++ Express users
    return 0;
}