#include <iostream>
using namespace std;

int main()
{
    int w100, w50, w10, w5, w1, WEIGHT;

    cout << "Enter the weight of the object: ";
    cin >> WEIGHT;

    w100 = int(WEIGHT/100);
    w50 = int((WEIGHT - w100 * 100)/50);
    w10 = int((WEIGHT - w100 * 100 - w50 * 50) / 10);
    w5 = int((WEIGHT - w100 * 100 - w50 * 50 - w10 * 10) / 5);
    w1 = int((WEIGHT - w100 * 100 - w50 * 50 - w10 * 10 - w5 * 5) / 1);

    cout << "The total number of weights for each type of weight is "
         << "\n Weight       Amount"
         << "\n---------------------"
         << "\n 100             " << w100
         << "\n 50              " << w50
         << "\n 10              " << w10
         << "\n 5               " << w5
         << "\n 1               " << w1 << endl;

    return 0;
}