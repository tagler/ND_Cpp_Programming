// ex3-24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// declare variables
double peso(5), dollar;

//blank line
cout << endl;

//output exchange rate
cout << "Exchange Rate: 1 Dollar = 9.02 Pesos" << endl << endl << endl;

// table titles
cout << "Pesos to Dollars Table" << endl << endl;
cout << setw(6) << "Pesos" << setw(14) << "Dollars" << endl;

// make a 25 entry long table of conversions
for (int n=1; n<=25; n++)
{
	// convert and output
	dollar = peso * 0.110864745;
	cout << setw(6) << peso << setw(14) << dollar << endl;

	// increment by 5
	peso += 5;
}

//blank line
cout << endl;

// exit program
return(0);

}
