#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void readBytes(fstream&, long, int);     // function prototype

int main()
{    
    string filename;
    long offset;
    int num;

    cout << "Please input the filename, where to start, and number of characters to be read: ";
    cin >> filename >> offset >> num;

    fstream inFile(filename.c_str());
    if (inFile.fail())
    {
        cout << "The file could not be opened for reading." << endl;
        exit(1);
    }

    cout << "The following information has been generated from the file: " << endl;
    readBytes(inFile, offset, num);

    inFile.close();

    return 0;
}

void readBytes(fstream& filename, long firstChar, int numChar)
{
    char ch;
    int i;

    for (i = 1; i <= numChar; i++) 
    {
        filename.seekg(firstChar, ios::beg);
        ch = filename.get();
        cout << ch << " ";
        firstChar++;
    }

    return;
}