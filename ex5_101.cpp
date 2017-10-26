// -----------------------------------------------------
// Ex5-101
// -----------------------------------------------------

# include <iostream>
using namespace std;

bool is_prime(int );

int main()
{
  int N = 3;
  do {
     cout << endl << "Enter a positive integer of at least 2: ";
     cin >> N;
     } while ( N<= 1 );

	// ******** added this so that "1" would print out in front of all the other numbers as is stated in the problme statement
	cout << "1 ";

  for ( int k =2; k<=N; k++)
      if ( is_prime(k) ) cout << k << ' ' ;

  cout << endl << endl;
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
