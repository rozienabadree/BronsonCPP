#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void appendData(fstream&);  // function prototype

int main()
{
    int last;
    string filename, line;
    fstream file;

    cout << "Please enter the name of the file: ";
    getline(cin, filename);

    file.open(filename.c_str());    // open the file

    if (file.fail())
    {
        cout << "Please check the file. It cannot be opened." << endl;
        exit(1);
    }
    
    appendData(file);

    file.seekg(0, ios::beg); // reset the file pointer to the beginning

    cout << "The contents of the file are now: " << endl;   // to confirm the function worked
    while (getline(file, line))                             // print each line of the polar.dat file
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}

void appendData(fstream& filename)
{
    double distance, angle;

    cout << "Enter the distance and angle you wish to add to the file: " << endl;
    cin >> distance >> angle;

    filename.seekg(0L, ios::end); // move to the end of the file
    filename << distance << "     " << angle << endl;

    return;
}