#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib> // needed for exit()
#include <string>
using namespace std;

int main()
{
    const int MAXLEN = 10;
    int numbers[] = {60, 40, 80, 90, 120, 150, 130, 160, 170, 200};

    string filename = "numbers.txt";
    ofstream outfile;

    outfile.open(filename.c_str());
    if (outfile.fail())
    {
        cout << "The file has not successfully opened" << endl;
        exit(1);
    }

    // write the data to the file
    for (int i = 0; i < MAXLEN; i++)
    {
        outfile << numbers[i] << endl;
    }
    outfile.close();
    cout << "The file " << filename << " has been successfully written." << endl;

    return 0;
}