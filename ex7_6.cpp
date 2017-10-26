// --------------------------------------------------------------------------
// ex7-6
// -------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main()
{

	// declare matrix and variables
	const int NROWS(10);
	const int NCOLS(7);
	double data[NROWS][NCOLS];
	double min(RAND_MAX);
	string day;
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
			}
		}
	}
	data_1.close();

		// find min value
		for (int i=0 ; i <= NROWS-1 ; i++)
		{
			for (int j=0 ; j<=NCOLS-1; j++)
			{
				if (data[i][j] < min)
				{
					min = data[i][j];
				}
			}
		}
		cout << endl << "The Minimun Power is " << min << endl << endl;

		// prints days with min value
		for (int i=0 ; i <= NROWS-1 ; i++)
		{
			for (int j=0 ; j<=NCOLS-1; j++)
			{
				if (data[i][j] == min)
				{
					switch (j)
						{
						case(0): day = "Sunday (Day 1)"; break;
						case(1): day = "Monday (Day 2)"; break;
						case(2): day = "Tuesday (Day 3)"; break;
						case(3): day = "Wednesday (Day 4)"; break;
						case(4): day = "Thursday (Day 5)"; break;
						case(5): day = "Friday (Day 6)"; break;
						case(6): day = "Saturday (Day 7)"; break;
						default: break;
						}
					cout << "The Minimun Power occures on " << day << " of week " << i+1 << endl;
				}
			}
		}

		// blank line
		cout << endl;

	// exit program
	return(0);
}
