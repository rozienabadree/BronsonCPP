#include <cmath>
#include <iomanip>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;
    int threecount = 0;
    int fourcount = 0;
    int fivecount = 0;
    int sixcount = 0;
    int sevencount = 0;
    int eightcount = 0;
    int ninecount = 0;
    double factor;
    int randvalue;
    int counter = 1;

    srand(time(NULL));      // needed to produce different random numbers reach run

    while (counter <= 1000)
    {
        randvalue = rand() % 10;       // will produce random numbers between 0 and 9

        switch(randvalue)
        {
            case 0:
                zerocount++;
                break;
            case 1:
                onecount++;
                break;
            case 2:
                twocount++;
                break;
            case 3:
                threecount++;
                break;
            case 4:
                fourcount++;
                break;
            case 5:
                fivecount++;
                break;
            case 6:
                sixcount++;
                break;
            case 7:
                sevencount++;
                break;
            case 8:
                eightcount++;
                break;
            case 9:
                ninecount++;
                break;
        }
        counter++;
    }

    factor = 100.0 / 1000.0;

    cout << "         Count    Percentage\n"
         << "         -----    ----------\n";
    cout << " Zeros:  " << setw(4) << zerocount << setw(11) << zerocount * factor << "%\n";
    cout << " Ones:   " << setw(4) << onecount << setw(11) << onecount * factor << "%\n";
    cout << " Twos:   " << setw(4) << twocount << setw(11) << twocount * factor << "%\n";
    cout << " Threes: " << setw(4) << threecount << setw(11) << threecount * factor << "%\n";
    cout << " Fours:  " << setw(4) << fourcount << setw(11) << fourcount * factor << "%\n";
    cout << " Fives:  " << setw(4) << fivecount << setw(11) << fivecount * factor << "%\n";
    cout << " Sixes:  " << setw(4) << sixcount << setw(11) << sixcount * factor << "%\n";
    cout << " Sevens: " << setw(4) << sevencount << setw(11) << sevencount * factor << "%\n";
    cout << " Eights: " << setw(4) << eightcount << setw(11) << eightcount * factor << "%\n";
    cout << " Nines:  " << setw(4) << ninecount << setw(11) << ninecount * factor << "%\n";

    return 0;
}