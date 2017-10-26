// ex4-19

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	// deblare variables
	int d, h, l, av;
	int TA, TB, TC, TD, TE, TF;
	int ga, gb, gc, gd, ge, gf;
	ifstream file1;
	string filename1;

	TA = TB = TC =TD =TE = TF = 0;
	ga = gb = gc = gd = ge = gf = 0;

		// ask user for filename
		cout << endl << "Enter Name of Input File: (jan91.dat) " << endl;
		cin >> filename1;

		// open file
		file1.open(filename1.c_str());

		// fail statement
		if ( file1.fail() )
			{
				cout << endl << "Error Opening File" << endl;
				return 1;
			}

		// blank line
		cout << endl;

		// get data
		file1 >> d >> h >> l >> av;

		// loop until end of file
		while( !file1.eof() )
		{
			// check range from high to low loop
			while ( h >= l )
			{
				// check which groups temp belongs to
				if (h < 0) ga = 1;
				if (0 <= h && h <= 32) gb =1;
				if (33 <= h && h <= 50) gc =1;
				if (51 <= h && h <= 60) gd =1;
				if (61 <= h && h <= 70) ge =1;
				if (h > 70) gf =1;
				// subtact one
				h--;
			}
		// add up total of days within the temp ranges
		if (ga == 1) TA++;
		if (gb == 1) TB++;
		if (gc == 1) TC++;
		if (gd == 1) TD++;
		if (ge == 1) TE++;
		if (gf == 1) TF++;

		// clear variables and start a new line of data
		ga = gb = gc = gd = ge = gf = 0;
		file1 >> d >> h >> l >> av;
		}

	// close files
	file1.close();

	// output results
	cout << "Number of Days Below 0:   " << TA << endl;
	cout << "Number of Days 0-32:      " << TB << endl;
	cout << "Number of Days 33-50:     " << TC << endl;
	cout << "Number of Days 51-60:     " << TD << endl;
	cout << "Number of Days 61-70:     " << TE << endl;
	cout << "Number of Days Over 70:   " << TF << endl << endl;

	// exit
	return 0;
}
