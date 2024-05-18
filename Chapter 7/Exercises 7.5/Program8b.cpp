#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib> // needed for exit()
#include <string>
using namespace std;

double average(int[], int); // function prototype

int main()
{
    const int MAXLEN = 10;
    int numbers[MAXLEN];

    string filename = "numbers.dat";
    ifstream infile;
    ofstream outfile;

    infile.open(filename.c_str());

    if (infile.fail())
    {
        cout << "The file has not successfully opened" << endl;
        exit(1);
    }

    int anumber = 0;
    cout << "Enter a number: " << endl;
    cin >> anumber;

    // read a number and discard it:
    int discard;
    infile >> discard;

    // read the data from the file
    for (int i = 0; i < MAXLEN - 1; i++)
    {
        infile >> numbers[i];
    }
    infile.close();
    cout << "The file " << filename << " has been sucessfully read." << endl;

    // Append the new number to the end of the list
    numbers[MAXLEN - 1] = anumber;

    // Compute the average:
    cout << "The average of the numbers is: " << average(numbers, MAXLEN) << endl;

    // overwrite the old file with the new numbers:
    outfile.open(filename.c_str(), ios::trunc);
    if (outfile.fail())
    {
        cout << "The file has not successfully opened" << endl;
        exit(1);
    }

    for (int i = 0; i < MAXLEN; i++)
    {
        outfile << numbers[i] << endl;
    }

    cout << "File has successfully written." << endl;

    outfile.close();

    return 0;
}

double average(int nums[], int len)
{
    double sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum = sum + nums[i];
    }
    return sum * 1.0 / len;
}