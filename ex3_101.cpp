// --------------------------------------------------------------------------
// ex5-32
// -------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
double integrate(double a, dobule b, int n);
double f(double x);

int main()
{




	// exit program
	return(0);
}


double integrate(double a, double b, int n)
{
	// Declare objections
	double sum(0), x, base, area;

	base = (b-a)/n;
	fot(int k=2; k<=n; k++)
	{
		x = a + base*(k-1);
		sum = sum + f(x);
	}
	area = 0.5*base*(f(a) + 2*sum + f(b));
	return area;
}

double f(double x)
{
	return(4*exp(-x))
}
