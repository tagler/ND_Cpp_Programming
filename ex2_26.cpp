#include <iostream>
using namespace std;

int main()
{

// declare variables
double TF, TC, TR;

// input temp
cout << endl << "This program will convert from degrees Celsius to degrees Rankin" << endl << endl;
cout << "Enter temperature (Celcius): ";
cin >> TC;

// convert temp
TF = (9.0/5.0)*TC + 32;
TR = TF + 459.67;

// output temp
cout << endl << "Temperature (Rankin): " << TR << endl << endl;

// exit program
return (0);

}
