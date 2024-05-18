#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    const int MAXLEN = 10;
    int numbers[] = {30, 60, 40, 80, 90, 120, 150, 130, 160, 170};

    string filename = "pollen.in";
    ofstream outfile;

    outfile.open(filename.c_str());
    if (outfile.fail())
    {
        cout << "The file was not successfully opened" << endl;
        exit(1);
    }

    // write the data to the file
    for (int i = 0; i < MAXLEN; i++)
    {
        outfile << numbers[i] << endl;
    }

    outfile.close();

    cout << "The file " << filename << " has been successfully written to." << endl;

    return 0;
}