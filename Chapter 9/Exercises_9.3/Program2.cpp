#include <iostream>
#include <string>
using namespace std;

int main()
{
    string message1 = "Now is the time";
    string message2 = "Rocky raccoon welcomes you";
    string message3 = "Happy Holidays";
    string message4 = "The good ship";

    cout << "The messages are:\n"
         << message1 << "\n"
         << message2 << "\n"
         << message3 << "\n"
         << message4 << endl;

    cout << "The value of each text at index 0 is:\n"
         << message1.at(0) << " " << message2.at(0) << " " << message3.at(0) << " " << message4.at(0) << endl;

    cout << "The value of each text at index 3 is:\n"
         << message1.at(3) << " " << message2.at(3) << " " << message3.at(3) << " " << message4.at(3) << endl;

    cout << "The value of each text at index 10 is:\n"
         << message1.at(10) << " " << message2.at(10) << " " << message3.at(10) << " " << message4.at(10) << endl;

    return 0;
}