// ex3-20

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// declare constants and variables
const double PI = 3.141593;
double degrees(0), radians;
int i;

// blank line
cout << endl;

// ask user for increment
cout << "Enter Increment of Degrees: " << endl << endl;
cin >> i;
cout << endl;
cout.precision(5);

// blank line
cout << endl;

//table titles
cout << "Degrees to Radians Table" << endl << endl;
cout << setw(6) << "Degrees" << setw(14) << "Radians" << endl;

// convert degrees to radians for each increment
while (degrees <= 360.0)
{

	// convert and output
	radians = degrees * PI/180.0;
	cout << setw(6) << degrees << setw(14) << radians << endl;

	// increment by i, user input
	degrees += i;

}

// special case to print out 360 degrees to radians if the user-inputed increment does not go evenly to 360
// not sure if this is necessary, but problem says "last line should have 360 degrees
if (360 % i != 0)
{
	degrees = 360;
	radians = degrees * PI/180.0;
	cout << setw(6) << degrees << setw(14) << radians << endl;
}
else {;}

// blank line
cout << endl;

// exit program
return(0);

}
