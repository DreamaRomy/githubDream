#include <iostream>
#include <cmath>
using namespace std;

bool Remove(int n) {
    int sqrtN = sqrt(n);
    return sqrtN * sqrtN == n;
}
int main() {
    int coins = 20;

     cout << "Subtract a Square!" <<endl;

    while (coins > 0) {
         cout << "Number of coins in the pile is = " << coins <<"\n"<< "Player 1, please enter number of coins you want to remove: ";
        int playerMove;
         cin >> playerMove;

        if (!Remove(playerMove)) {
             cout << "stop moving!."<<"\n"<< "Please enter a square number: " << endl; //(1,2,4,9,16 )
            continue;
        }

        coins -= playerMove; //subtract coins

        if (coins <= 0) {
             cout << "Player 1 wins" <<endl;
            break;
        }

         cout << "The number of coins in pile= " << coins <<endl;

        // 2nd Player
         cout << "Player 2, please enter the number of coins you want to remove: ";
         cin >> playerMove;

        if (!Remove(playerMove)) {
             cout << "stop moving!."<<"\n"<<"\n"<< "Please enter a square number: " << endl;
            continue;
        }

        coins -= playerMove;

        if (coins <= 0) {
             cout <<"Player 2 wins!"<<endl;
            break;
        }

         cout << "Existing coins is: "<< coins<<endl;
    }

    return 0;
}
