// --------------------------------------------------------------------------
// ex7-13
// -------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

//function prototypes
vector< vector<double> > update(vector< vector<double> > T_old, int NROWS, int NCOLS, double top, double bottom, double left, double right);
double err(vector< vector<double> > T_new, vector< vector<double> > T_old, int NROWS, int NCOLS);

int main()
{
	// declare matrix and variables
	const int NROWS(6);
	const int NCOLS(8);
	double top, bottom, left, right;
	double error, etemp;
	vector< vector<double> > T_new(NROWS,NCOLS);
	vector< vector<double> > T_old(NROWS,NCOLS);

	// ask for inputs
	cout << endl << "Top Temperature: ";
	cin >> top;
	cout << "Bottom Temperature: ";
	cin >> bottom;
	cout << "Left Temperature: ";
	cin >> left;
	cout << "Right Temperature: ";
	cin >> right;
	cout << endl << "Tolerance (between 0 and 1): ";
	cin >> error;
	cout << endl;

	// calcualte new matrix after averages and its error from old matrix
	T_new = update(T_old, NROWS, NCOLS, top, bottom, left, right);
	etemp = err( T_new, T_old, NROWS, NCOLS);

	//loop till new matrix is less than error
	while (etemp > error)
	{
		T_new = update(T_old, NROWS, NCOLS, top, bottom, left, right);
		etemp = err( T_new, T_old, NROWS, NCOLS);
		T_old = T_new;
	}

    // output matrix
    for (int i=0; i<NROWS; i++)  // This first for loop is for rows
         {
			 for (int j=0; j<NCOLS; j++)  // This second for loop is for columns
				 cout << T_new[i][j] << ' ' ;
			 cout << endl;  // This prints a new line for each row
	     }

	// blank line
	cout << endl;

	// exit program
	return(0);
}




//-----------------------------------------------------------------------------------------
// this function calculates the new average vlaue of each cell, updates the matrix
vector< vector<double> > update(vector< vector<double> > T_old, int NROWS, int NCOLS, double top, double bottom, double left, double right)
{
// declare variables
vector< vector<double> > T_new(NROWS,NCOLS);
double t1, t2, t3, t4;

// loop through matrix entries
for (int i=0 ; i <= NROWS-1 ; i++)
		{
			for (int j=0 ; j<=NCOLS-1; j++)
			{
				if ( i == 0 ) // top of matrix (i know i could put these in more functions, but this is easier to see for me)
					{
						t1 = top;
						if (j == 0)
						{
						t2 = T_old[i][j+1];
						t3 = T_old[i+1][j];
						t4 = left;
						}
						else if (j == NCOLS-1)
						{
						t2 = right;
						t3 = T_old[i+1][j];
						t4 = T_old[i][j-1];
						}
						else
						{
						t2 = T_old[i][j+1];
						t3 = T_old[i+1][j];
						t4 = T_old[i][j-1];;
						}
					}
				else if ( i == NROWS-1 ) // bottom of matrix
					{
						t3 = bottom;
						if (j == 0)
						{
						t1 = T_old[i-1][j];
						t2 = T_old[i][j+1];
						t4 = left;
						}
						else if (j == NCOLS-1)
						{
						t1 = T_old[i-1][j];
						t2 = right;
						t4 = T_old[i][j-1];
						}
						else
						{
						t1 = T_old[i-1][j];
						t2 = T_old[i][j+1];
						t4 = T_old[i][j-1];
						}
					}
				else if ( j == 0 ) // left side of matrix
					{
						t1 = T_old[i-1][j];
						t2 = T_old[i][j+1];
						t3 = T_old[i+1][j];
						t4 = left;
					}
				else if ( j == NCOLS-1 ) // right side of matrix
					{
						t1 = T_old[i-1][j];
						t2 = right;
						t3 = T_old[i+1][j];
						t4 = T_old[i][j-1];
					}
				else  // middle of matrix
					{
						t1 = T_old[i-1][j];
						t2 = T_old[i][j+1];
						t3 = T_old[i+1][j];
						t4 = T_old[i][j-1];
					}
				//  new value of cell in old matrix
				T_old[i][j] = (t1 + t2 + t3 + t4)/4.0;
			}
		}

// return new matrix
return T_old;
}

//---------------------------------------------------------------------------------------------
// this function calcualtes the error
double err(vector< vector<double> > T_new, vector< vector<double> > T_old, int NROWS, int NCOLS)
{
// declare variables
double etemp(0);

// loop through and calculate the max difference between the old and new matrixes, the max difference is considered the error
for (int i=0 ; i <= NROWS-1 ; i++)
		{
			for (int j=0 ; j<=NCOLS-1; j++)
			{
				if ( T_new[i][j] != T_old[i][j]  )
				{
					if ( abs(T_new[i][j] - T_old[i][j]) > etemp )
					{
						etemp = abs(T_new[i][j] - T_old[i][j]);
					}
				}
			}
		}

// return error
return etemp;
}
