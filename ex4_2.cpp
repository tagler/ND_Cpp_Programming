// ex4-2

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// deblare variables
	int n(0), nl(0);
	char character;
	ifstream file1;
	string filename;

		// ask user for filename
		cout << endl << "Enter Name of Input File: " << endl;
		cin >> filename;

		// open file
		file1.open(filename.c_str());

			// fail statement
			if (file1.fail())
			{
				cout << endl << "Error Opening File" << endl;
				return 1;
			}
		// get first character
		file1.get(character);

			// loop to run for entire file
			while(!file1.eof())
			{

				// if digit
				if (isdigit(character))

					{
					// increment
					n++;

						// loop untill not a digit
						while(isdigit(character))
							{
								// get next character
								file1.get(character);
							}
					}

				// if new line
				if (character == '\n' )
					{
						// increment
						nl++;
					}

				// get next character
				file1.get(character);
			}

	// outpput
	cout << endl << "Number of Integers: " << n << endl << "Number of Lines: " << nl << endl << endl;
	file1.close();

	// exit program
	return 0;
}
