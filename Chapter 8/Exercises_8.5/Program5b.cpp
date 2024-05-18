#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <math.h> // needed for the sine and cosine functions
using namespace std;

// function prototypes
void readCumulatives(int[], int[], string[], double[], int, fstream &);
void writeCumulatives(int[], int[], string[], double[], int, fstream &, ifstream &);

int main()
{
    // The file with the grades for individual classes (from 4a.)
    string grades = "grades.dat";
    ifstream courseGrades;

    // The file with grade summaries for each student (from 5a) to be updated.
    string cumulatives = "gradeUpdate.dat";
    fstream updatedGrades;

    // A set of parallel arrays to store the information in the second file.
    const int MAXSTUDENTS = 3; // The maximum number of students
    int studentIdCumulative[MAXSTUDENTS];
    int cumulativeCredits[MAXSTUDENTS];
    string nameCumulative[MAXSTUDENTS];
    double cumulativeAverage[MAXSTUDENTS];

    // open the cumulative grade file
    updatedGrades.open(cumulatives.c_str(), ios::in);
    if (updatedGrades.fail())
    {
        cout << "The file " << cumulatives
             << " has not successfully opened" << endl;
        exit(1);
    }

    // store the information from the file to be updated
    readCumulatives(studentIdCumulative, cumulativeCredits, nameCumulative, cumulativeAverage, MAXSTUDENTS, updatedGrades);

    // close the file
    updatedGrades.close();

    // overwrite the cumulative grades file to update it
    updatedGrades.open(cumulatives.c_str(), ios::out);
    updatedGrades << setiosflags(ios::fixed)
                  << setiosflags(ios::showpoint)
                  << setprecision(2);

    // Open the file of grades used to recompute the cumulative grades
    courseGrades.open(grades.c_str());
    if (courseGrades.fail())
    {
        cout << "The file " << grades << " has not successfully opened." << endl;
        exit(1);
    }

    writeCumulatives(studentIdCumulative, cumulativeCredits, nameCumulative, cumulativeAverage, MAXSTUDENTS, updatedGrades, courseGrades);

    // close the files
    courseGrades.close();
    updatedGrades.close();
    return 0;
}

void readCumulatives(int studentIds[], int credits[], string names[], double averages[], int maxstudents, fstream &infile)
{
    for (int i = 0; i < maxstudents; i++)
    {
        if (infile.good())
        {
            infile >> studentIds[i] >> names[i] >> credits[i] >> averages[i];
        }
    }
    return;
}

void writeCumulatives(int ids[], int creds[], string names[], double averages[], int maxstudents, fstream &outfile, ifstream &infile)
{

    // Variables for the file with individual course grades
    int studentId, credits;
    string name, courseId;
    char grade;

    // This variable lets us keep track of when we come to the next student
    int previousId;

    // get the first line of input
    infile >> studentId >> name >> courseId >> credits >> grade;
    previousId = studentId;

    while (infile.good())
    {
        int creditTotal = 0;
        double gpaSum = 0;

        // Process all of the grades for one student
        // The loop terminator will be false if we come to a new student Id, or the end of the file
        while ((studentId == previousId) && (infile.good()))
        {
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
            } // Open the output file

            // Get the next record
            infile >> studentId >> name >> courseId >> credits >> grade;
        }

        // Get the cumulative grades for the current student
        for (int i = 0; i < maxstudents; i++)
        {
            int id = ids[i];

            // recall that studentId is now the *next* student, and previousId is the current student
            if (id == previousId)
            {
                string nm = names[i];
                int crds = creds[i];
                double ave = averages[i];

                // recompute the gpa and the total credits and write it to the output file
                outfile << id << " " << nm << " "
                        << creditTotal + crds << " "
                        << ((ave * crds) + gpaSum) / (creditTotal + crds) << endl;
            }
        }

        // Reset the loop terminator because we finished with the current student's record
        previousId = studentId;
    }
}