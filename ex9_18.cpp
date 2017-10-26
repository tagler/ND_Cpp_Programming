// --------------------------------------------------------------------------
// ex9-18
// -------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;

// function prototype
int repeat(char *ptr);

int main()
{
	// declare objects
	int count(0);
	char strg[100];
	char *ptr(strg);

	// ask for inputs
	cout << endl << "Input Character Array: ";
	cin.getline (strg,100);

	// calls funtion for count
	count = repeat(ptr);

	// outputs count
	cout << endl << "Count: " << count << endl << endl;

	// exit
	return(0);
}

// ---------------------------------------------------------------------------------------
// this function counts the number of times characters repeat
int repeat(char *ptr)
{
	// declare objects
	int count(0), n;
	// array of all characters
	int ascii[128] = {0};

	// loop till end of string
	// will make an array of how many times each character occurs in the string
	while(*ptr)
	{
		// convert character to its integer value
		n = *ptr;

		// increase ascii array value for each character occurance
		ascii[n] = ascii[n] + 1;

		// next character
		ptr++;
	}

	// do not count repeated spaces
	// the 'space' integer value is 32
	ascii[32] = 0;

	// counts the number of characters that occur more than once
	for (int i = 0 ; i < 128 ; i++ )
	{
		if ( ascii[i] >= 2 )
		{
			// increase count
			count++;
		}
	}

	// return count
	return count;
}
// ----------------------------------------------------------------------------------------
