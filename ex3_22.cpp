// ex3-22

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// declare variables
double mph(0), fts;

// blank line
cout << endl;
cout.precision(5);

// table titles
cout << "MPH to Ft/Sec Table" << endl << endl;
cout << setw(6) << "MPH" << setw(14) << "Ft/Sec" << endl;

// while loop to convert mph to fts, with increment 5
while (mph <= 65)
{

	// convert and output
	fts = mph * (1.0/3600.0) * (5280.0);
	cout << setw(6) << mph << setw(14) << fts << endl;

	// increment by 5
	mph += 5;
}

// blank line
cout << endl;

// exit program
return(0);

}
