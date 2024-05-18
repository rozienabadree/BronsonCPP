#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string filename = "car.dat";
    int car, miles, gallons;
    int totMiles = 0, totGallons = 0, count = 0;
    double avg = 0.0, mpg;
    ifstream inFile;

    inFile.open(filename.c_str());

    if (inFile.fail()) // check for successful open
    {
        cout << "\nThe file was not successfully opened"
             << "\n Please check that the file currently exists."
             << endl;
        exit(1);
    }

    // read and display the file's contents
    cout << fixed << setprecision(2) << endl;
    cout << "Car      Miles      Gallons    Miles Per" << endl;
    cout << "Number   Driven      Used        Gallon" << endl;
    cout << "------   ------     -------    ---------" << endl;
    inFile >> car >> miles >> gallons;

    while (inFile.good())
    {
        mpg = (double)miles / (double)gallons;
        count++;
        totGallons = totGallons + gallons;
        totMiles = totMiles + miles;
        avg = avg + mpg;

        cout << setw(3) << car << "       "
             << miles << "     " << setw(5) << gallons
             << "        " << setw(5) << mpg << endl;
        inFile >> car >> miles >> gallons;
    }

    avg = avg / count;
    cout << "------   ------     -------    ---------" << endl;
    cout << "Totals:   " << totMiles << "        " << totGallons
         << "        " << avg << endl;

    inFile.close();

    return 0;
}