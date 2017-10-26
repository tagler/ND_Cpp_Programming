// ex5-12

#include <iostream>
#include <cstdlib>
using namespace std;

// fucntion prototype
int rand_int(int a, int b);

int main()
{

// declare variables
unsigned int seed, toss, H(0), T(0), r, tosst;

// ask user for seed
cout << endl << "Enter a Positive Integer Seed Value: " << endl;
cin >> seed;
srand(seed);

// ask user for coin tosses
cout << endl << "Enter Number of Coin Tosses: " << endl;
cin >> toss;
tosst = toss;

	// run simulation "toss" number of times
	for ( ; toss > 0 ; toss-- )
	{
		// generate random integer between 0 and 11
		r = rand_int(1,10);
		// keep track of heads ( 6-10 ) and tails ( 1-5)
		if (r > 5) {H++;}
		else {T++;}
	}

	// output results
	cout << endl
		 << "Total Number of Tosses:      " << tosst << endl;
	cout << "Number of Heads:             " << H << endl
		 << "Numbers of Tails:            " << T << endl << endl;
	cout << "The Percentage Distribution of Heads and Tails is Theoretically 50% / 50% "  << endl << endl;

	//exit
	return 0;
}

// function generates a random integer between a and b
int rand_int(int a, int b)
{
	return rand()%(b-a+1) + a;
}
