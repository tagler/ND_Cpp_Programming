// -----------------------------------------------------
// Ex5-102
// -----------------------------------------------------

# include <iostream>
# include <vector>
using namespace std;

// prototypes
bool is_prime(int );
void funprimes(int& n, int& N, const vector<double>& x);

int main()
{
	// devlare variables
	 int N(1), n(1), i(1), M(4);


	// ask user for input
	while ( N%2 != 0 || N < 4 )
		{
			cout << endl << "Enter an even number greater than 4: ";
			cin >> N;
		}


	// determine the number of primes
	for ( int k =2; k<=N; k++)
		{
			  if ( is_prime(k) )
				 {
					  n++;
				 }
		}


	// define vector (didn't use an array because I want to make it only "n" entries big, save memory
    vector<double> v(n);
	v[0] = 1;


	// input primes into the vector
	for ( int k =2; k<=N; k++)
		{
			  if ( is_prime(k) )
				 {
					  v[i] = k;
					  i++;
				 }
		}

	// blank line
	cout << endl << endl;



	// runs function funprimes for each even number M untill it equals N
	while ( M<=N )
		{
		    funprimes(n, M, v);
			// increment
			M += 2;
		}



	// blank line
	cout << endl << endl;

// exit
return 0;
}



// ------------------------------------------------------------
// THIS FUNCTION FINDS WHICH TWO PRIMES IN VECTOR V SUM TO N
void funprimes(int& n, int& M, const vector<double>& v)
{
			// finds which two primes equal the value of N
			for ( int i=0 ; i<n ; i++)
				{
					for ( int j=0 ; j<n ; j++)
						{
							if ( i != j)
							{
									if ( (v[i] + v[j]) == M )
										{
												// output sum
												cout << M << " = " << v[i] << " + " << v[j] << endl;

												return;
										}
							}
						}
				}

			return;
}

// ----------------------------------------------------------------------------
// THIS FUNCTION CHECK IF M IS PRIME
bool is_prime(int M)
{

// declare variable
int n = 2;

	// loop if find if not prime
	for ( ; n <= (M/2) ; n++)
	{
		if ( M%n == 0 )
		{

		// if not prime
		return 0;
		}
	}

// if prime
return 1;

}
