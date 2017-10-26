// ------------------------------------------------------------------------------------------------
// Program to simulate two dice and caluclate the precentage of time that the dice add up to eight
// ex5-15
// ------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
using namespace std;

// fucntion prototype
int rand_int(int a, int b);

int main()
{

	// declare variables
	unsigned int seed;
	double roll, rollt, R1, R2, eight(0), percentage, sum;

	// ask user for seed
	cout << endl << "Enter a positive integer seed value: ";
	cin >> seed;
	srand(seed);

	// ask user for dice rolls
	cout << endl << "Enter the number of times to roll each dice (two dice total): ";
	cin >> roll;
	rollt = roll;

	// blank line
	cout << endl;

	// run simulation "toss" number of times
	for ( ; roll > 0 ; roll-- )
	{
		// get random numbers for the dice values
		R1 = rand_int(1,6);
		R2 = rand_int(1,6);

		// sum dice
		sum = R1 + R2;

			// count the rumber of times the dice sum to 8
			if ( sum == 8 )
			{
				// increment
				eight++;
			}
	}

	// output percentage of time that sum to 8
	percentage = (eight/rollt)*100.0;
	cout << "The percentage of time that the two dice sum to eight is " << percentage << "%" << endl << endl;

	//exit
	return 0;
}


// function generates a random integer between a and b
int rand_int(int a, int b)
{
	return rand()%(b-a+1) + a;
}
