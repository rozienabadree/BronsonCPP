#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    void addTwoFractions();
    double fractionToDecimal(double, double);
    void multiplyTwoFractions();

    int num1, num2, dem1, dem2;

    char choice;

    cout << "A. Add two fractions\nB. Convert a fraction to a decimal"
         << "\nC. Multiply two fractions \nQ. Quit\n";
    cin >> choice;

    if (choice == 'A' || choice == 'a')
        addTwoFractions();
    else if (choice == 'B' || choice == 'b')
    {
        cout << "Enter the numerator: ";
        cin >> num1;
        cout << "Enter the demonitor: ";
        cin >> dem1;
        cout << num1 << "/" << dem1 << " is: "
             << fractionToDecimal(num1, dem1) << endl;
    }
    else if (choice == 'C' || choice == 'c')
        multiplyTwoFractions();
    else if (choice == 'Q' || choice == 'q')
        exit(0);

    return 0;
}

void addTwoFractions()
{
    cout << "In addTwoFractions()" << endl;

    return;
}

double fractionToDecimal(double num, double dem)
{
    return num / dem;
}

void multiplyTwoFractions()
{
    cout << "In multiplyTwoFractions()" << endl;

    return;
}