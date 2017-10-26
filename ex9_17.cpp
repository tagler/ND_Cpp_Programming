// --------------------------------------------------------------------------
// ex9-17
// -------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;

// function prototype
int charcnt(char *ptr, char c);

int main()
{
	// declare objects
	int count(0);
	char c, strg[100];
	char *ptr(strg);

	// ask for inputs
	cout << endl << "Input Character Array: ";
	cin.getline (strg,100);
	cout << "Input Character: ";
	cin >> c;

	// calls funtion for count
	count = charcnt(ptr,c);

	// outputs count
	cout << endl << "Count: " << count << endl << endl;

	// exit
	return(0);
}

// ---------------------------------------------------------------------------------------
// this function counts the number of times a character is in a string
int charcnt(char *ptr, char c)
{
	// declare objects
	int count(0);

	// loops until end of character string
	while(*ptr)
		{
			if(*ptr == c)
				{
					// increments when pointer/character is equal to c
					count++;
				}
			ptr++;
		}

	// return count
	return count;
}
// ----------------------------------------------------------------------------------------
