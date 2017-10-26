// ex3-30

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// declare variables
	double TF, TC, TR, i;

	// Ask user to input starting temp and increment
	cout << endl << "Enter the Starting Temperature (Celcius): ";
	cin >> TC;
	cout << "Enter Increment Between Lines (Celcius): ";
	cin >> i;

	// table titles
	cout << endl << endl << setw(28) << "Celcius to Rankin Table" << endl << endl;
	cout << setw(7) << "Degrees Celcius" << setw(19) << "Degrees Rankin" << endl;

		// run loop 25 times
		for (int n=1; n<=25; n++)

		{
			// convert temp
			TF = (9.0/5.0)*TC + 32.0;
			TR = TF + 459.67;

			// output temp
			cout << setw(8) << TC << setw(22) << TR << endl;

			// increment
			TC += i;
		}

	//blank line
	cout << endl;

	// exit program
	return(0);

}
