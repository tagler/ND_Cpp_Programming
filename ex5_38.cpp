// --------------------------------------------------------------------------
// ex5-38
// this program will estimate cos(x) by a five term infinite series
// -------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// function prototypes
double ts(double x);

int main()
{
	// declare objects
	double x, answer;

	// ask user for input, angle
	cout << endl << "Enter angle (radians): ";
	cin >> x;

	// compute taylor series
	answer = ts(x);

	// print answer
	cout << endl << "Solution using infinite series:          " << answer << endl
		         << "Solution using C++ library function:     " << cos(x) << endl << endl;

	// exit program
	return(0);
}

// -------------------------------------------------------------------

//calculates series function
double ts(double x)
{
	// declare objects
	double factorial(2), sum(0), newterm(1), total_terms(0);

	// calculate taylor series
	while ( total_terms < 5 )
	{
		// add new term to the sum
		sum += newterm;

		// icnrease term count by 1
		total_terms++;

		// calculate the next term in the series
		newterm = newterm * ((-1)*x*x) / ( factorial*(factorial-1) );

		// increase demominator factorial by 2
		factorial += 2;
	}

	return sum;
}
