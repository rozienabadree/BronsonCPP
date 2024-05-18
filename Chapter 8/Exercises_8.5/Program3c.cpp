#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

void openInput(ifstream&);                  // pass a reference to an ifstream
void openOutput(ofstream&);                 // pass a reference to an ofstream
void polarToRect(ifstream&, ofstream&); // pass two references

int main()
{
    ifstream inFile;  // inFile is an ifstream object
    ofstream outFile; // outFile is an ofstream object

    // Display a user message
    cout << "\nThis program reads a polar.dat file and creates a second file "
         << "\nnamed xycord.dat where the polar coordinates are converted to "
         << "\nrectangular coordinates." << endl;

    openInput(inFile);
    openOutput(outFile);

    polarToRect(inFile, outFile);

    return 0;
}

// This function gets an external filename and opens the file for input
void openInput(ifstream& fname)
{
    string filename;

    cout << "\n\nEnter the polar coordinates filename: ";
    cin >> filename;

    fname.open(filename.c_str());
    if (fname.fail()) // check for a successful open
    {
        cout << "\nFailed to open the file named " << filename << " for input."
             << "\nPlease check that this file exists."
             << endl;
        exit(1);
    }

    return;
}

// This function gets an external filename and opens the file for output
void openOutput(ofstream& fname)
{
    string filename;

    cout << "Enter the rectangular coordinates filename: ";
    cin >> filename;

    fname.open(filename.c_str());
    if (fname.fail()) // check for a successful open
    {
        cout << "\nFailed to open the file named " << filename << "for output." << endl;
        exit(1);
    }

    return;
}

// The following function reads the pollen file,
// writes a new file,
// and returns the new weekly average
void polarToRect(ifstream& inFile, ofstream& outFile)
{
    double distance, angle, x, y;

    while (inFile >> distance >> angle) // read from the file until end of file
    {
        x = distance / 2.0 * cos(angle);
        y = distance / 2.0 * sin(angle);
        outFile << x << "     " << y << endl;
    }

    inFile.close();
    outFile.close();

    cout << "\nThe output file has been written.\n";

    return;
}