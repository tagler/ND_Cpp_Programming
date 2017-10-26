// ------------------------------------------------------------------------------------------------
// Program to find the roots of a quadratic equation
// ex5-26
// ------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

// fucntion prototype
void get_coefficients(double & a, double& b, double& c);

int main()
{
	// declare variables
	double a, b, c, r1, r2;

	// get the coefficents form the user
	get_coefficients(a, b, c);

		// check if solution is real or not
		if (b*b-4*a*c < 0)
			{
				cout << endl << "The roots are imaginary!" << endl << endl;

				// exit
				return 1;
			}

	// compute roots
	r1 = (-1*b + sqrt(b*b-4*a*c))/(2*a);
	r2 = (-1*b - sqrt(b*b-4*a*c))/(2*a);

	// output roots
	cout << endl << "Root 1: " << r1 << endl << "Root 2: " << r2 << endl << endl;

	//exit
	return 0;
}

// function asks user for coefficents
void get_coefficients(double & a, double& b, double& c)
{
	cout << endl << "This program will find real roots of a quadratic equation" << endl << "ax^2 + bx + c = 0";
	cout << endl << endl << "Coefficent a: ";
	cin >> a;
	cout << "Coefficent b: ";
	cin >> b;
	cout << "Coefficent c: ";
	cin >> c;
}
