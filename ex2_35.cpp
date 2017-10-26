#include <iostream>
using namespace std;

int main()
{

// declare variables
double V, r, h;

// input radius
cout << endl << "This program will compute the volume of a sphere of radius r" << endl << endl;
cout << "Enter Radius (r): ";
cin >> r;

// compute volume
V = (4.0/3.0)*3.14159265358979*r*r*r;

// output volume
cout << endl << "Sphere Volume: " << V << endl << endl;

// exit program
return(0);

}
