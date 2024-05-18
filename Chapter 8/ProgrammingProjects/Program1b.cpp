#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    fstream inFile;
    string filename = "pay.dat";
    string line, name;
    double payRate, hours, regPay, OTPay, grossPay;

    inFile.open(filename.c_str());

    if(inFile.fail())
    {
        cout << "Please check the input file named 'pay.dat'." << endl;
        exit(1);
    }

    cout << "\tName\t\t Pay Rate\t Hours\t\t Reg Pay\t\t OT Pay\t\t Gross Pay\n";

    while (inFile >> name >> payRate >> hours)
    {
        if (hours > 40)
        {
            regPay = payRate * 40;
            OTPay = payRate * ((hours - 40) * 1.5);
        }
        else
        {
            regPay = payRate * hours;
            OTPay = 0.00;
        }
        grossPay = regPay + OTPay;
        cout << name << fixed << setprecision(2) << "\t\t " << payRate << "\t\t " << hours << "\t\t " << regPay << "\t\t\t " << OTPay << "\t\t " << grossPay << endl;
    }

    inFile.close();

    return 0;
}