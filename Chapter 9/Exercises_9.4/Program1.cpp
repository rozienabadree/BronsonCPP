#include <iostream>
#include <string>
#include <cctype> // needed for character functions
using namespace std;

int main()
{
    string str = "This  123/ is 567 A ?<6245> Test!";
    char nextChar;
    int i;
    int numLetters = 0, numDigits = 0, numOthers = 0;

    cout << "The original string is: " << str
         << "\nThis string contains " << int(str.length())
         << " characters,"
         << " which consist of" << endl;

    // check each character in the string
    for (i = 0; i < int(str.length()); i++)
    {
        nextChar = str.at(i); // get a character
        if (isalpha(nextChar))
            numLetters++;
        else if (isdigit(nextChar))
            numDigits++;
        else
            numOthers++;
    }
    
    cout << "     " << numLetters << " letters" << endl;
    cout << "     " << numDigits << " digits" << endl;
    cout << "     " << numOthers << " other characters." << endl;

    cin.ignore();
    return 0;
}