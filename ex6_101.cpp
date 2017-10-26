// --------------------------------------------------------------------------
// ex6-101
// this program asks user for a vector and prints out the reverse order
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
    double inputs;

	// asking user for input
	cout << endl << "Enter Vector: ";

		// store values in vector
		while (cin.peek() != '\n')
		{
				cin >> inputs;
				// increase vector size and put values into vector
				 v.push_back(inputs);

				// checks if greater than max size of 50
				if (v.size() == 51)
				{
					cout << endl << "This vector is greater than the maximun size of 50, quiting" << endl << endl;
					// exit program
					return(1);
				}
		}


		// reverse order.
		cout << endl << "Reverse Order: ";
		for (int i = ((int)v.size()-1) ; i >= 0 ; i--)
		{
			// reverse output
			cout << v[i] << " ";
		}

		// blank line
		cout << endl << endl;

	// exit program
	return(0);
}
