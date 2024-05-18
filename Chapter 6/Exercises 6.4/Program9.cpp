#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

const int NUMSELS = 1000; // number of random no. selections

int main()
{
    int i;
    double rnum, factor;
    int zerocount, onecount, twocount, threecount;
    int fourcount, fivecount, sixcount, sevencount;
    int eightcount, ninecount, val;

    zerocount = onecount = twocount = threecount = fourcount = 0;
    fivecount = sixcount = sevencount = eightcount = ninecount = 0;

    srand(time(NULL));

    for (i = 1; i <= NUMSELS; ++i)
    {
        rnum = rand();
        val = int(rnum / RAND_MAX * 10);
        switch (val)
        {
        case 0:
            ++zerocount;
            break;
        case 1:
            ++onecount;
            break;
        case 2:
            ++twocount;
            break;
        case 3:
            ++threecount;
            break;
        case 4:
            ++fourcount;
            break;
        case 5:
            ++fivecount;
            break;
        case 6:
            ++sixcount;
            break;
        case 7:
            ++sevencount;
            break;
        case 8:
            ++eightcount;
            break;
        case 9:
            ++ninecount;
        }
    }

    factor = 100.0 / NUMSELS;

    cout << " Zeros: " << zerocount * factor << "%\n";
    cout << " Ones:  " << onecount * factor << "%\n";
    cout << " Twos:  " << twocount * factor << "%\n";

    cout << " Threes:" << threecount * factor << "%\n";
    cout << " Fours: " << fourcount * factor << "%\n";
    cout << " Fives: " << fivecount * factor << "%\n";
    cout << " Sixes: " << sixcount * factor << "%\n";
    cout << " Sevens:" << sevencount * factor << "%\n";
    cout << " Eights:" << eightcount * factor << "%\n";
    cout << " Nines: " << ninecount * factor << "%\n";

    return 0;
}