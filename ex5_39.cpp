// --------------------------------------------------------------------------
// ex5-39
// this program will estimate cos(x) by an infinite series
// -------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// function prototypes
void ts(double& x, double& ts_answer, double& terms);

int main()
{
	// declare objects
	double x, answer, terms(0);

	// ask user for input, angle
	cout << endl << "Enter angle (radians): ";
	cin >> x;

	// compute taylor series with void function
	ts(x, answer, terms);

	// print answer
	cout << endl << "Solution using infinite series:          " << answer << endl
		         << "Solution using C++ library function:     " << cos(x) << endl;
	cout << endl << "The number of terms in the series is:    " << terms << endl << endl;

	// exit program
	return(0);
}

// -------------------------------------------------------------------

// series void function
void ts(double& x, double& ts_answer, double& terms)
{
	// declare objects
	double factorial(2), sum(0), newterm(1), total_terms(0);

	// calculate taylor series
	while ( abs(newterm) > 0.0001 )
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

	terms = total_terms;
	ts_answer = sum;

	return;
}
