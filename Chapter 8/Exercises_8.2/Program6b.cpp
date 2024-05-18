#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string filename = "printer.txt", line;

    fstream inFile, outFile;
    int count = 0;

    inFile.open("Readme_English.txt"); // you will have to modify this line to accommodate the location of your printer
    outFile.open(filename.c_str());

    if (inFile.fail()) // check for successful open
    {
        cout << "\nThe printer file was not successfully opened." << endl;
        exit(1);
    }

    if (outFile.fail()) // check for successful open
    {
        cout << "\nThe writing to file was not successfully opened."
             << "\n Please check that the file currently exists."
             << endl;
        exit(1);
    }

    // read and display the file's contents
    while (getline(inFile, line))
    {
        count++;
        outFile << count << ".  " << line << endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}