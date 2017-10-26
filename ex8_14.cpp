/*----------------------------------------------------*/ 
 
#include <iostream>
#include "Date.h"
using namespace std;    
   
int main() 
{ 
   //  Declare objects. 
   Date final(5,12,2006);
   Date mydate;

   cout << "Our final exam is on: ";
   final.print_date(cout);
   cout << '\n' << endl;

   cout << "Enter your birthday in the format mm/dd/yyyy: " << endl;
   mydate.input_date(cin);

   cout << "Your birthday is: ";
   mydate.print_date_monthname(cout);
   cout << endl;
   
   return 0; 
} 
/*----------------------------------------------------*/ 
 
