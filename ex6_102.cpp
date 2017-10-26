// --------------------------------------------------------------------------
// ex6-102
// this program calculates the dot product of two vectors of the same size
// -------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{

	// declare vector and variables
    vector<double> v;
	vector<double> w;
    double dp(0), inputs;
	unsigned int k(0), i(0);
	char c;

		// vector 1 input
		cout << endl << "Enter Vector A: ";
		// store values in vector
		while (cin >> inputs)
		{
			// increase vector size and put values into vector
		    v.push_back(inputs);

			// checks to see where the user hits "enter" or '\n'
			cin.get(c);
			if (c == '\n')
			{
				cin.putback(c);
				break;
			}
		}

		// vector 2 input
		cout << endl << "Enter Vector B: ";
		while (cin >> inputs)
		{
			// increase vector size and put values into vector
		    w.push_back(inputs);

			// checks to see where the user hits "enter" or '\n'
			cin.get(c);
			if (c == '\n')
			{
				cin.putback(c);
				break;
			}
		}




		// checks if vectors are same size
		if ( v.size() == w.size() )
		{

			// calculates dot product
			while ( i < v.size() )
			{
				dp = dp + ( v[i] * w[i] );
				i++;
			}
			cout << endl << "Dot Product: " << dp << endl << endl;

		}
		else
		{
			// print not same size
			cout << endl << "Can not calculate dot product! (vectors are not the same size)" << endl << endl;
		}

	// exit program
	return(0);
}
