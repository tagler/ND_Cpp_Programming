/*------------------------------------------------------------------*/ 
/*                                                                  */ 
/* This program tests each of the functions in the circle class.    */ 
 
#include <iostream> 
#include "circle.h"
using namespace std;
 
int main() 
{ 
// Test default constructor. 
  circle c1; 
 
// Test constructor with 4 arguments. 
  circle c2(0,1,5); 
 
// Test print function and verify constructors. 
  cout << "Value of c1:\n "; 
  c1.print(cout); 
  cout << endl; 
  cout << "Value of c2:\n "; 
  c2.print(cout); 
  cout << endl; 
 
// Test input function. 
  cout << "\nEnter values to define a circle (separated by space):\n" 
       << "x-coordinate, y-coordinate, radiu  " << endl; 
  c1.input(cin); 
  c1.print(cout); 
  cout << endl; 

// Translate
  cout << "Translate the center by (1,2):" << endl;
  c1.translate(1,2);
  c1.print(cout); 
  cout << endl; 

// Resize
  cout << " Resacle by 10: " << endl;
  c1.resize(10);
  c1.print(cout); 
  cout << endl; 

  return 0; 
} 
 
