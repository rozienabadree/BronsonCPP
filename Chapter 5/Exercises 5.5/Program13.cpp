#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    const int MAXGUESSES = 7;
    int guess, count, val;
    double rnum;
    bool won = false;

    srand(time(NULL));
    rnum = rand();
    // scale the number to be between 1 and 100
    val = int(rnum / RAND_MAX * 100);

    cout << "I am thinking of a number between 1 and 100.\n"
         << "You have 7 tries to determine the number.\n";
    for (count = 1; count <= MAXGUESSES; count++)
    {
        cout << "\nEnter guess " << count << " : ";
        cin >> guess;

        if (guess == val)
        {
            cout << "\nCongratulations! You did it in " << count << " guesses\n";
            won = true;
            break;
        }
        else if (guess < val)
            cout << "\nThat guess was too low.";
        else if (guess > val)
            cout << "\nThat guess was too high.";
    }

    if (!won)
    {
        cout << "\nSorry, You have used up all your guesses\n"
             << "The number was " << val << endl;
    }

    return 0;
}