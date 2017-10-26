// -----------------------------------------------------
// Ex5-103
// -----------------------------------------------------

# include <iostream>
using namespace std;

bool is_prime(int );

int main()
{

	// define variables
	double a1, a2, a3, a4, a5;

	// output title
	cout << endl << "Prime Palindromes between 10000 and 35000:" << endl << endl;

	// loop for all values
	for ( int k = 10000 ; k <= 35000 ; k++ )
	{

	// compute digits
	a1 = k - (k/10)*10;
	a2 = k/10 - (k/100)*10;
	a3 = k/100 - (k/1000)*10;
	a4 = k/1000 - (k/10000)*10;
	a5 = k/10000;

		// if prime
		if (is_prime(k))
		{
			// if palindrome, print it out
			if ( a1 == a5 && a2 == a4 )
			{
				cout << k << endl;
			}
		}

	}

	// blank line
	cout << endl;

  // exit program
  return 0;
}

//check if M is prime
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
