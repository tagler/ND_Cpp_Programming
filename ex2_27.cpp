#include <iostream>
using namespace std;

int main()
{

// declare variables
double TK, TR, TF;

// input temp
cout << endl << "This program will convert from degrees Kelvin to degrees Fahrenheit" << endl << endl;
cout << "Enter temperature (Kelvin): ";
cin >> TK;

// convert temp
TR = (9.0/5.0)*TK;
TF = TR - 459.67;

// output temp
cout << endl << "Temperature (Fahrenheit): " << TF << endl << endl;

// exit program
return(0);

}
