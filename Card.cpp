// -------------------------------------------------------------------------------------
// ex8-16
// -------------------------------------------------------------------------------------
// class implementation for card class

#include "Card.h"

// definition of default constructor
Card::Card(): suit(Spades), rank(1)
{}
// definition of constructor
Card::Card(Suits s, int r): suit(s), rank(r)
{}

// gets suit
Suits Card::get_suit()
{
	return suit;
}

// gets rank
int Card::get_rank()
{
	return rank;
}

// displays card as "Ace of Spades"
void Card::display_card()
 {
		// loops to display the correct card name
		switch (rank)
			{
			case (1): cout << "Ace of ";
					switch (suit)
					{
					case (0): cout << "Clubs" << endl; break;
					case (1): cout << "Diamonds" << endl; break;
					case (2): cout << "Hearts" << endl; break;
					case (3): cout << "Spades" << endl; break;
					}
					break;
			case (11): cout << "Jack of ";
					switch (suit)
					{
					case (0): cout << "Clubs" << endl; break;
					case (1): cout << "Diamonds" << endl; break;
					case (2): cout << "Hearts" << endl; break;
					case (3): cout << "Spades" << endl; break;
					}
					break;
			case (12): cout << "Queen of ";
					switch (suit)
					{
					case (0): cout << "Clubs" << endl; break;
					case (1): cout << "Diamonds" << endl; break;
					case (2): cout << "Hearts" << endl; break;
					case (3): cout << "Spades" << endl; break;
					}
					break;
			case (13): cout << "King of ";
					switch (suit)
					{
					case (0): cout << "Clubs" << endl; break;
					case (1): cout << "Diamonds" << endl; break;
					case (2): cout << "Hearts" << endl; break;
					case (3): cout << "Spades" << endl; break;
					}
					break;

			default: cout << rank << " of ";
					switch (suit)
					{
					case (0): cout << "Clubs" << endl; break;
					case (1): cout << "Diamonds" << endl; break;
					case (2): cout << "Hearts" << endl; break;
					case (3): cout << "Spades" << endl; break;
					}
					break;
			}

			// void return
			return;
 }
