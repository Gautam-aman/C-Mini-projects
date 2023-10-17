#include <iostream>
#include <random>
using namespace std;

class Game
{
    char a;

public:
    Game(void)
    {
        cout << "Welcome to Rock Paper Scissor game::" << endl;
        cout << "  " << endl;
        cout << "-----------------------------------------------------------------------" << endl;
        cout << "  " << endl;
        cout << "Instructions:: " << endl
             << "R means Rock" << endl
             << "P means paper " << endl
             << "S means Scissors" << endl
             << "Choose between R,P and S (Please Use capital letters)" << endl;
        cout << "  " << endl;
        cout << "------------------------------------------------------------------------" << endl;
        cout << "  " << endl;
        cout << "Make Your call :: " << endl;
        cin >> a;
        random_device value;
        uniform_int_distribution<int> dist(1, 3);
        int q = dist(value);
        // 1 is Rock
        // 2 is paper
        // 3 is scissors

        if (q == 1 && a == 'P')
        {
            cout << "You :: Paper " << endl
                 << "Computer :: Rock" << endl;
            cout << "YOU WON" << endl;
            cout << "Thanks for playing";
        }
        else if (q == 1 && a == 'S')
        {
            cout << "You :: Scissors " << endl
                 << "Computer :: Rock" << endl;
            cout << "COMPUTER WON" << endl;
            cout << "Thanks for playing";
        }

        else if (q == 2 && a == 'R')
        {
            cout << "You :: Rock " << endl
                 << "Computer :: Paper" << endl;
            cout << "COMPUTER WON" << endl;
            cout << "Thanks for playing";
        }

        else if (q == 2 && a == 'S')
        {
            cout << "You :: Scissors " << endl
                 << "Computer :: Paper" << endl;
            cout << "You WON" << endl;
            cout << "Thanks for playing";
        }

        else if (q == 3 && a == 'R')
        {
            cout << "You :: Rock " << endl
                 << "Computer :: Scissors" << endl;
            cout << "YOU WON" << endl;
            cout << "Thanks for playing";
        }

        else if (q == 3 && a == 'P')
        {
            cout << "You :: Paper " << endl
                 << "Computer :: Scissors" << endl;
            cout << "COMPUTER WON" << endl;
            cout << "Thanks for playing";
        }
        else
        {
            cout << "::Game tied:: You and Computer got the same call" << endl;
            cout << "Thanks for playing";
        }
    }
};

int main()
{
    Game();
    return 0;
}