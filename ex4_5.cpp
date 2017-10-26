// ex4-5

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	// deblare variables
	char c;
	ifstream file1;
	ofstream file2;
	string filename1, filename2;

		// ask user for filename
		cout << endl << "Enter Name of Input File: " << endl;
		cin >> filename1;

		// ask user for output filensmae
		cout << endl << "Enter Name of Output File: " << endl;
		cin >> filename2;

		// open file
		file1.open(filename1.c_str());
		file2.open(filename2.c_str());

		// fail statement
		if (file1.fail())
			{
				cout << endl << "Error Opening File" << endl;
				return 1;
			}

		// get first character
		file1.get(c);

		while(!file1.eof())
			{

				// print digits to output file
				if(isdigit(c))
				{
					while(isdigit(c))
					{
						file2 << c;
						file1.get(c);
					}
				}

				// add newlines and negative symbols
				switch (c)
				{
				    case (' '):
						file2 << " ";
						break;
					case ('.'):
						file2 << ".";
						break;
					case ('('):
						file2 << "-";
						break;
					case ('\n'):
						file2 << '\n';
						break;
				}

				// get next character
				file1.get(c);
			}

	// output success
	cout << endl << "Your File Has Been Created" << endl << endl;
	file1.close();
	file2.close();

	// exit
	return 0;
}
