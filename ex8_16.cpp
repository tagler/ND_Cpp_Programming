/*----------------------------------------------------*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Card.h"
using namespace std;

int main()
{
   // This program displays all Cards in a random suit
   Suits mysuit[]= {Clubs, Diamonds, Hearts, Spades};
   int k;
   char ch;

   srand(time(NULL));

   while ( ch != 'n' ) {
     k = rand()%4;
     for (int j=1; j<=13; j++) {
             Card mycard(mysuit[k], j);
             mycard.display_card();
             }
     cout << "Continue (y/n)? " << endl;
     cin.get(ch);
     }

   return 0;
}

/*----------------------------------------------------*/
