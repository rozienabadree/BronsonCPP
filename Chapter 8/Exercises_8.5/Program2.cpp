#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void openInput(ifstream&);                  // pass a reference to an ifstream
void openOutput(ofstream&);                 // pass a reference to an ofstream
double pollenUpdate(ifstream&, ofstream&); // pass two references

int main()
{
    ifstream inFile;  // inFile is an ifstream object
    ofstream outFile; // outFile is an ofstream object
    double average;

    // Display a user message
    cout << "\n\nThis program reads the old pollen count file, "
        << "creates a current pollen"
        << "\n count file, and calculates and displays "
        << "the latest 10-week average.";

    openInput(inFile);
    openOutput(outFile);

    average = pollenUpdate(inFile, outFile);

    cout << "\nThe new 10-week average is: " << average << endl;

    return 0;
}

// This function gets an external filename and opens the file for input
void openInput(ifstream &fname)
{
    string filename;

    cout << "\n\nEnter the input pollen count filename: ";
    cin >> filename;

    fname.open(filename.c_str());
    if (fname.fail()) // check for a successful open
    {
        cout << "\nFailed to open the file named " << filename << " for input"
            << "\n Please check that this file exists"
            << endl;
        exit(1);
    }

    return;
}

// This function gets an external filename and opens the file for output
void openOutput(ofstream &fname)
{
    string filename;

    cout << "Enter the output pollen count filename: ";
    cin >> filename;

    fname.open(filename.c_str());
    if (fname.fail()) // check for a successful open
    {
        cout << "\nFailed to open the file named " << filename << "for output" << endl;
        exit(1);
    }

    return;
}

// The following function reads the pollen file,
// writes a new file,
// and returns the new weekly average
double pollenUpdate(ifstream &inFile, ofstream &outFile)
{
    const int POLNUMS = 10; // maximum number of pollen counts
    int i, polreading;
    int oldreading, newcount;
    double sum = 0;
    double average;

    // Get the latest pollen count
    cout << "Enter the latest pollen count reading: ";
    cin >> newcount;

    // Read the oldest pollen count
    inFile >> oldreading;

    // Read, sum, and write out the rest of the pollen counts
    for (i = 1; i < POLNUMS; i++)
    {
        inFile >> polreading;
        sum += polreading;
        outFile << polreading << endl;
    }

    // Write out the latest reading
    outFile << newcount << endl;

    // Compute and display the new average
    average = (sum + newcount) / double(POLNUMS);

    inFile.close();
    outFile.close();

    cout << "\nThe output file has been written.\n";

    return average;
}