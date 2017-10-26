// --------------------------------------------------------------------------
// ex7-5
// -------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{

	// declare matrix and variables
	const int NROWS(10);
	const int NCOLS(7);
	double data[NROWS][NCOLS];
	double sum(0), average, above(0);
	ifstream data_1;

	// open file and put input data in array
	data_1.open("power1.dat");
	if(!data_1.fail())
	{
		for (int i=0 ; i <= NROWS-1 ; i++)
		{
			for (int j=0 ; j<=NCOLS-1; j++)
			{
				data_1 >> data[i][j];
				sum = sum + data[i][j];
			}
		}
	}
	data_1.close();

	// calc average
	average = sum/(NROWS*NCOLS);

		// check how many days above average
		for (int i=0 ; i <= NROWS-1 ; i++)
		{
			for (int j=0 ; j<=NCOLS-1; j++)
			{
				if (data[i][j] > average)
					above++;
			}
		}

		// output results
		cout << endl << "Average Power: " << average << endl;
		cout << "Days Above Average: " << above << endl << endl;

	// exit program
	return(0);
}
