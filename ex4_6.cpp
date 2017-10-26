// ex4-5

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	// deblare variables
	int l(1), m(0), W(0), Q(0);
	char a, b;
	ifstream file1;
	ifstream file2;
	ifstream file3;
	ifstream file4;
	string filename1, filename2;

		// ask user for filename
		cout << endl << "Enter Name of Input File 1: " << endl;
		cin >> filename1;

		// ask user for output filensmae
		cout << endl << "Enter Name of Output File 2: " << endl;
		cin >> filename2;


		// open file
		file1.open(filename1.c_str());
		file2.open(filename2.c_str());

		// fail statement
		if ( file1.fail() || file1.fail() )
			{
				cout << endl << "Error Opening File" << endl;
				return 1;
			}

		cout << endl;

		// get first character
		file1.get(a);
	    file2.get(b);

		// loop until one file is at end of file
		while( !file1.eof() && !file2.eof() )
		{
			// if the values don't match
			if ( a != b )
			{
				cout << "These files are not the same on line " << l << endl;
				m = 1;
						// advance both files to the next line
						while ( b != '\n' )
						{
							file2.get(b);
						}
						while ( a != '\n' )
						{
							file1.get(a);
						}
			}
			// if one file is at the end of line while the other isn't, advance the other to the end of line
			if ( a == '\n' && b != '\n' )
			{
				cout << "These files are not the same on line " << l << endl;
				m = 1;
					while ( b != '\n' )
					{
						file2.get(b);
					}
			}
			if ( b == '\n' && a != '\n' )
			{
				cout << "These files are not the same on line " << l << endl;
				m = 1;
					while ( a != '\n' )
					{
						file1.get(a);
					}
			}

			// increment line number when both liens at end of line
			if (a == '\n' && b == '\n')
			{ l++; }

			// get next characters
			file1.get(a);
			file2.get(b);
		}

	// close files
	file1.close();
	file2.close();

// ***Following is for when the number of lines are not equal between files

	// open file
	file3.open(filename1.c_str());
	file4.open(filename2.c_str());

	// get first character
	file3.get(a);
	file4.get(b);

	// count lines in file 1
	while( !file3.eof() )
	{
		if ( a == '\n' )
		{ Q++; }

		file3.get(a);
	}
	// count lines in file 2
	while( !file4.eof() )
	{
		if ( b == '\n' )
		{ W++; }

		file4.get(b);
	}


	// if the number of lines do not match, say the lines are different
	if ( W != Q)
	{
		m=1;
		if (W > Q)
		{
			while ( W > Q)
			{
				Q++;
				cout << "These files are not the same on line " << Q <<endl;
			}
		}
		if ( W < Q)
		{
			while ( W < Q)
			{
				W++;
				cout << "These files are not the same on line " << W <<endl;
			}
		}
	}

	// close files
	file3.close();
	file4.close();


	// if all characters the same, state files the same
	if (m == 0)
	{
		cout << "These files are extactly the same!" << endl << endl;
	}

	if (m == 1)
	{
		//blank line
		cout << endl;
	}

	// exit
	return 0;
}
