// ex3-102

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// declare variables
	double x, fraction;

	cout << endl << "Fuction: f(x) = x - cos(x)" << endl << endl;

	// ask user for starting value of x
	cout << "Enter Inital Value of x: ";
	cin >> x;

		// loop untill when abs(x-cos(x)) is less than 1e-5
		while ( abs(x - cos(x)) >= 0.00001 )
		{
			// conduct newton's method, x(n+1) = x(n) - f(xn)/f'(xn)
			fraction = (  (x-cos(x))  /  (1+sin(x))   );
			x = x - fraction;
		}

	// print root
	cout << endl << "Root = " << x << endl << endl;

	//exit program
	return (0);
}
