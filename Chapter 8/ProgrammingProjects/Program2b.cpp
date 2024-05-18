#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    fstream inFile;

    string filename = "numbers.dat";
    int count, i;
    double groupNum, num, total, average;

    inFile.open(filename.c_str());
    if (inFile.fail())
    {
        cout << "The file 'numbers.dat' failed to open. Please check it." << endl;
        exit(1);
    }

    while (inFile.good())
    {
        total = 0;
        average = 0;

        inFile >> groupNum;
        count = groupNum;

        for (i = 0; i < count; i++)
        {
            inFile >> num;
            total += num;
        }

        average = total/groupNum;
        cout << "The average of this group of " << groupNum << " numbers is " << average << "." << endl;
    }

    inFile.close();

    return 0;

}