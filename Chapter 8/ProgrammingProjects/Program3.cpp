#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const int MAXSTUDENTS = 20;
    string filename = "grade.dat";
    string name;
    char letterGrade;
    int i;
    double ex1, ex2, hw, fe, fg;

    ofstream outFile(filename.c_str());
    if (outFile.fail())
    {
        cout << "\nFailed to open the data file." << endl;
        exit(1);
    }

    outFile << setiosflags(ios::fixed)
            << setiosflags(ios::showpoint)
            << setprecision(2);

    for (i = 0; i < MAXSTUDENTS; i++)
    {
        cout << "\nEnter the student's last name and four scores (XX 0 0 0 0 to exit): \n";
        cin >> name >> ex1 >> ex2 >> hw >> fe;
        if (name == "XX")
            break;
        fg = 0.2 * ex1 + 0.2 * ex2 + 0.35 * hw + 0.25 * fe;
        if (fg >= 90)
            letterGrade = 'A';
        else if (fg >= 80)
            letterGrade = 'B';
        else if (fg >= 70)
            letterGrade = 'C';
        else if (fg >= 60)
            letterGrade = 'D';
        else
            letterGrade = 'F';

        cout << "\nFor this student the following data has been written to the file: \n";
        cout << name << " " << ex1 << " " << ex2 << " "
             << hw << " " << fe << " " << fg << " " << letterGrade << endl;
        outFile << name << " " << ex1 << " " << ex2 << " "
                << hw << " " << fe << " " << fg << " " << letterGrade << endl;
    }

    outFile.close();

    return 0;
}