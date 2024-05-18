#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void readBytes(fstream&, long, int, string&);     // function prototype

int main()
{    
    string filename, storage;
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
    readBytes(inFile, offset, num, storage);

    inFile.close();

    cout << "Characters read: " << storage << endl;

    return 0;
}

void readBytes(fstream& filename, long firstChar, int numChar, string& storage)
{
    char ch;

    for (int i = 1; i <= numChar; i++) 
    {
        filename.seekg(firstChar, ios::beg);
        ch = filename.get();
        storage += ch;
        firstChar++;
    }

    return;
}