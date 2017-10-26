// ex3-29

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// declare variables
double TF(0), TK, TR;
int i;

// blank line
cout << endl;

// ask user for temp increment
cout << "Please Enter Temp Increment Between Lines (Degrees Fahrenheit): " << endl << endl;
cin >> i;

// blank line
cout << endl << endl;

//table titles
cout << "Fahrenheit to Kelvin Table" << endl << endl;
cout << setw(6) << "Fahrenheit" << setw(10) << "Kelvin" << endl;

	// loop to convert temp and increment temp
	do
	{
		// convert
		TR = TF + 459.67;
		TK = TR*(5.0/9.0);

		// ouput
		cout << setw(6) << TF << setw(14) << TK << endl;

		// increment
		TF += i;

	} while (TF <= 200);

// special case to print out 200 F in case user does not put in an even increment that reults in 200 F
// not sure if this is necessary, but problem says it should go to 200 F
if (200 % i != 0)
{
		TF = 200.0;
		TR = TF + 459.67;
		TK = TR*(5.0/9.0);
		cout << setw(6) << TF << setw(14) << TK << endl;
}
else {;}

// blank line
cout << endl;

// exit program
return(0);

}
