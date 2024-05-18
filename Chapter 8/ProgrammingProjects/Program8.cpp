#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const int MAXCUSTOMERS = 5;
    int acts[MAXCUSTOMERS];
    char first[MAXCUSTOMERS][10];
    char last[MAXCUSTOMERS][15];
    double balance[MAXCUSTOMERS];

    int index, account;
    int i;

    bool found = false;

    ifstream input("bank.dat");

    if (input.fail())
    {
        cout << "ERROR: Cannot open customer record file!" << endl;
        cin.ignore();
        exit(1);
    }

    // Read in the customer records from the file
    for (i = 0; i < MAXCUSTOMERS; i++)
    {
        input >> acts[i];
        input >> first[i];
        input >> last[i];
        input >> balance[i];
    }

    input.close();

    cout << "The data read from the file is:" << endl;
    cout << "Acct. First     Last    Balance" << endl;
    for (i = 0; i < MAXCUSTOMERS; i++)
        cout << acts[i] << "  " << first[i]
             << '\t' << last[i] << "\t"
             << setiosflags(ios::fixed) << setprecision(2)
             << balance[i] << endl;

    cout << "\nPlease enter an account number: ";
    cin >> account;

    // locate the account
    for (i = 0; i < MAXCUSTOMERS; i++)
        if (account == acts[i])
        {
            index = i;
            found = true;
            break;
        }

    if (!found)
    {
        cout << "ERROR: Invalid account number." << endl;
        cin.ignore();
        cin.ignore(); // needed for MS C++ Express users
        exit(1);
    }
    else
    {
        cout << "\nThis account belongs to " << first[index] << " ";
        cout << last[index] << "." << endl;

        cout << "Current balance: $";
        cout << setiosflags(ios::fixed) << setprecision(2);
        cout << balance[index] << endl
             << endl;
    }

    return 0;
}