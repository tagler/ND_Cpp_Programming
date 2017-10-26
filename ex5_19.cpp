// ------------------------------------------------------------------------------------------------
// Program to simulate reliability of 5,000 simulations of figure 5.15
// ex5-19
// ------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

// fucntion prototype
double rand_float(double a, double b);

int main()
{

	// declare variables
	unsigned int seed;
	double n, ntotal, a, b, c, d, sucess(0), r;

	// ask user for seed
	cout << endl << "Enter a Positive Integer Seed Value: ";
	cin >> seed;
	srand(seed);

	// output info
	cout << endl << "The Number of Simulations is 5,000" << endl;
	cout << "Analytical Reliability is 0.99976" << endl;

	// number of simulations
	n = 5000;
	ntotal = 5000;

		// loop 5000 times for each simulation
		for ( ; n > 0 ; n-- )
			{
			// generate random numbers
			a = rand_float(0,1);
			b = rand_float(0,1);
			c = rand_float(0,1);
			d = rand_float(0,1);

				// count number of sucessfull runs
				if ( a<0.95 || b<0.95 || (c<0.95 && d<0.95) )
				{
					sucess++;
				}
			}

	//calculate reliability and output
	r = sucess/ntotal;
	cout << endl << "Simulation Reliability: " << fixed << setprecision(5) << r << endl << endl;

	//exit
	return 0;
}


// function generates a random integer between a and b
double rand_float(double a, double b)
{
	return ((double)rand()/RAND_MAX)*(b-a)+a;
}
