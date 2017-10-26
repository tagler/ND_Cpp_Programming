// --------------------------------------------------------------------------
// ex6-19
// this program calculates the mean/varience of random numbers
// -------------------------------------------------------------------------

// ******************************************************************************
// **** NOTE: I modified the stat_lib.cpp functions and put them in this file,
// ****   in order to use vectors instead of arrays
// ******************************************************************************

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

// function prototypes
double rand_float(double a, double b);
double mean(const vector<double> v, int n);
double variance(const vector<double> v, int n);


int main()
{
	// declare variables
	double a(4),b(10),cm,cv;
	int n;
	vector<double> v;

	// ask user for inputs
	cout << endl << "How many random numbers: ";
	cin >> n;

	// output theoretical values
	cout << endl << "Theoretical Mean = " << (a+b)/2 << endl;
	cout << "Theoretical Variance = " << (b-a)*(b-a)/12 << endl << endl;

	// create vector of random values
	for ( int i = 0 ; i < n ; i++ )
	{
		v.push_back( rand_float(a,b) );
	}

	// calculate mean
	cm = mean( v , n);
	cout << "Calculated Mean = " << cm << endl;

	// calculate varience
	cv = variance( v , n);
	cout << "Calculated Varience = " << cv << endl << endl;

	// exit program
	return 0;

}






/*----------------------------------------------------*/
/*  This function generates a random                  */
/*  double value between a and b                      */

double rand_float(double a, double b)
{
return ((double)rand()/RAND_MAX)*(b-a)+a;
}
/*----------------------------------------------------*/
/*----------------------------------------------------*/
/*  This function returns the average                 */
/*  value in the array x with n elements.             */

double mean(const vector<double> x, int n)
{
   //  Declare local objects.
   double sum(0);

   //  Determine mean value in the array.
   for (int k=0; k<=n-1; k++)
   {
       sum += x[k];
   }

   //  Return mean value. /
   return sum/n;
}
/*----------------------------------------------------*/
/*----------------------------------------------------*/
/*  This function returns the variance                */
/*  value in the array x with n elements.             */

double variance(const vector<double> x, int n)
{
   //  Declare local objects.
   double sum(0), mu;

   mu = mean(x,n);

   for (int k=0; k<=n-1; k++)
   {
      sum += (x[k]-mu)*(x[k]-mu);
   }

   //  Return maximum value. /
   return sum/(n-1);
}
/*----------------------------------------------------*/
