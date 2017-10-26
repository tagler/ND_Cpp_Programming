#include <iostream>
using namespace std;

int main()
{

// declare variables
double V, r, h;

// input radius
cout << endl << "This program will compute the volume of a cylinder of radius r and height h" << endl << endl;
cout << "Enter Radius (r): ";
cin >> r;
cout << "Enter Height (h): ";
cin >> h;

// compute volume
V = 3.14159265358979*r*r*h;

// output volume
cout << endl << "Cylinder Volume: " << V << endl << endl;

// exit program
return(0);








}
