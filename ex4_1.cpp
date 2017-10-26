// ex4-1

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
   //  Declare variables.
   int invalid(0), q(0);
   char x;
   string filename;
   ifstream file1;

   //  Prompt user for file name and open input file.
   cout << endl << "Enter Name of Input File: " << endl;
   cin >> filename;
   file1.open(filename.c_str() );
   cout << endl;

		 //
		 if(file1.fail())
		 {
			  cout << "Error Opening File, Quiting" << filename << endl;
			  return 1;
		 }

   // read character from file1
   file1 >> x ;

		// while loop for entire file
		while (!file1.eof())
		 {
			 // filter legal and invalid characters through switch
			 switch (x)
				 {

			      // leagl characters
				  case ' ':
				  case '+':
				  case '-':
				  case '0':
				  case '1':
			      case '2':
				  case '3':
				  case '4':
				  case '5':
			      case '6':
				  case '7':
				  case '8':
				  case '9':
						 break;

				  default:

						 //print title once
					     if (q == 0)
							{
								cout << "Invalid Caracters: ";
								q = 1;
							}
						 else {;}

						 // print invalid character
						 cout << x << " ";

						 //increment
                         invalid++;
					     break;
				 }

		    // next character
			file1 >> x ;
		 }

   //  Print results.
   cout << endl << endl << "Number of Invalid Characters = " << invalid << endl << endl;

   //  Close file and exit program.
   file1.close();
   return 0;
}
