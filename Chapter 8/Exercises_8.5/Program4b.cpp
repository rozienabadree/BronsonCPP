#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string infilename = "grades.dat";
    string outfilename;
    ofstream outfile;
    ifstream infile;

    // Open the input file
    infile.open(infilename.c_str());

    if (infile.fail())
    {
        cout << "The infile (grades.dat) has not successfully opened." << endl;
        exit(1);
    }

    outfilename = "gradeReports.dat";

    // Open the output file
    outfile.open(outfilename.c_str());

    if (outfile.fail())
    {
        cout << "The file has not successfully opened" << endl;
        exit(1);
    }

    outfile << setiosflags(ios::fixed)
            << setiosflags(ios::showpoint)
            << setprecision(1);

    int studentId, credits;
    string name, courseId;
    char grade;
    int previousId;

    // get the first line of input
    infile >> studentId >> name >> courseId >> credits >> grade;
    previousId = studentId;

    while (infile.good())
    {
        // print the header
        outfile << "Student Name: " << name << endl;
        outfile << "Student ID Number: " << studentId << endl;
        outfile << endl;
        outfile << "Course Code       Course Credits              Grade" << endl;
        outfile << "----------------------------------------------------" << endl;

        int creditTotal = 0;
        double gpaSum = 0;

        // Process all of the grades for one student
        // This will be false if we come to a new student Id, or the end of the file

        while ((studentId == previousId) && (infile.good()))
        {
            // Print out the individual course grades
            outfile << courseId << "\t\t\t" << credits << "\t\t\t" << grade << endl;

            // Keep track of the total credits
            creditTotal = creditTotal + credits;

            // Convert the letter grades to a numeric score, weighted by the credits
            if (grade == 'A')
            {
                gpaSum = gpaSum + 4.0 * credits;
            }
            else if (grade == 'B')
            {
                gpaSum = gpaSum + 3.0 * credits;
            }
            else if (grade == 'C')
            {
                gpaSum = gpaSum + 2.0 * credits;
            }
            else if (grade == 'D')
            {
                gpaSum = gpaSum + credits;
            }

            // Get the next record
            infile >> studentId >> name >> courseId >> credits >> grade;
        }

        // print out the totals
        outfile << endl;
        outfile << "Total Semester Course Credits Completed: " << creditTotal << endl;
        outfile << "Semester GPA: " << gpaSum * 1.0 / creditTotal << endl
                << endl
                << endl;

        // Reset the loop terminator because this is a new student's record
        previousId = studentId;
    }
    outfile.close();
    infile.close();

    cout << "The file " << outfilename << " has been successfully written to." << endl;

    return 0;
}