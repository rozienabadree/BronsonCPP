#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int fileChars(string);  // function prototype

int main()
{
    string filename = "test.dat";
    int numChars = fileChars(filename);

    cout << "The number of characters in the file named " << filename << " is " << numChars << "." << endl;

    return 0;
}

int fileChars(string filename)
{
    long last;

    ifstream inFile(filename.c_str());
    if (inFile.fail())
    {
        cout << "\nThe file did not open. Please check and try again." << endl;
        
        exit(1);
    }

    inFile.seekg(0L, ios::end);     // start at the beginning of the file
    last = inFile.tellg();

    return last;
}