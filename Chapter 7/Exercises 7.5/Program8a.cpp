#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib> // needed for exit()
#include <string>
using namespace std;

int main()
{
    const int MAXLEN = 10;
    int numbers[MAXLEN];

    string filename = "numbers.dat";
    ifstream infile;

    infile.open(filename.c_str());

    if (infile.fail())
    {
        cout << "The file has not successfully opened" << endl;
        exit(1);
    }

    // read the data from the file
    for (int i = 0; i < MAXLEN; i++)
    {
        infile >> numbers[i];
    }
    infile.close();
    cout << "The file " << filename << " has been sucessfully read." << endl;

    // Here is an output statement to test the program:
    for (int i = 0; i < MAXLEN; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}