#include <iostream>
using namespace std;

void change(int amount, int&, int&, int&, int&, int&, int&);    // function prototype

int main()
{
    int input, hundreds, fifties, twenties, tens, fives, ones;

    cout << "Please enter the dollar amount to be changed: ";
    cin >> input;

    change(input, hundreds, fifties, twenties, tens, fives, ones);

    cout << "The fewest number of equivalent bills for " << input << " is\n"
         << "Hundreds:\t" << hundreds << "\n"
         << "Fifties:\t" << fifties << "\n"
         << "Twenties:\t" << twenties << "\n"
         << "Tens:\t\t" << tens << "\n"
         << "Fives:\t\t" << fives << "\n"
         << "Ones:\t\t" << ones << "\n";

    return 0;
}

void change(int amount, int& hundreds, int& fifties, int& twenties, int& tens, int& fives, int& ones)
{
    hundreds = amount / 100;
    fifties = (amount - hundreds * 100) / 50;
    twenties = (amount - hundreds * 100 - fifties * 50) / 20;
    tens = (amount - hundreds * 100 - fifties * 50 - twenties * 20) / 10;
    fives = (amount - hundreds * 100 - fifties * 50 - twenties * 20 - tens * 10) / 5;
    ones = (amount - hundreds * 100 - fifties * 50 - twenties * 20 - tens * 10 - fives * 5) / 1;
    
    return;
}