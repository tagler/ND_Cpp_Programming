// ---------------------------------------------------------------------------------------
// ex6-23
// this program counts and displays the number of occurances of all 128 ascii characters
// ---------------------------------------------------------------------------------------

/*  ASCII TABLE:
          0   8  16  24    32	40  48	56    64  72  80  88	96 104 112 120
	+---+---+---+---+ +---+---+---+---+ +---+---+---+---+ +---+---+---+---+
     0	|NUL|BS	|DLE|CAN| |SP |	( | 0 |	8 | | @	| H | P	| X | |	` | h |	p | x |
	+---+---+---+---+ +---+---+---+---+ +---+---+---+---+ +---+---+---+---+
     1	|SOH|HT	|DC1|EM	| | ! |	) | 1 |	9 | | A	| I | Q	| Y | |	a | i |	q | y |
	+---+---+---+---+ +---+---+---+---+ +---+---+---+---+ +---+---+---+---+
     2	|STX|LF	|DC2|SUB| | " |	* | 2 |	: | | B	| J | R	| Z | |	b | j |	r | z |
	+---+---+---+---+ +---+---+---+---+ +---+---+---+---+ +---+---+---+---+
     3	|ETX|VT	|DC3|ESC| | # |	+ | 3 |	; | | C	| K | S	| [ | |	c | k |	s | { |
	+---+---+---+---+ +---+---+---+---+ +---+---+---+---+ +---+---+---+---+
     4	|EOT|FF	|DC4|FS	| | $ |	, | 4 |	< | | D	| L | T	| \ | |	d | l |	t | | |
	+---+---+---+---+ +---+---+---+---+ +---+---+---+---+ +---+---+---+---+
     5	|ENQ|CR	|NAK|GS	| | % |	- | 5 |	= | | E	| M | U	| ] | |	e | m |	u | } |
	+---+---+---+---+ +---+---+---+---+ +---+---+---+---+ +---+---+---+---+
     6	|ACK|SO	|SYN|RS	| | & |	. | 6 |	> | | F	| N | V	| ^ | |	f | n |	v | ~ |
	+---+---+---+---+ +---+---+---+---+ +---+---+---+---+ +---+---+---+---+
     7	|BEL|SI	|ETB|US	| | ' |	/ | 7 |	? | | G	| O | W	| _ | |	g | o |	w |DEL|
	+---+---+---+---+ +---+---+---+---+ +---+---+---+---+ +---+---+---+---+
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main()
{
	// declare variables
	ifstream file1;
	string filename;
	char character;
	int n;
	int ascii[128] = {0};

	// ask user for filename
	cout << endl << "Please See ASCII Table for Special Character Abbreviations" << endl;
	cout << endl << "Enter Name of Input File: ";
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
	n = character;

	// loop till end of file
	while(!file1.eof())
	{
		// increases count for each occurance
		ascii[n] = ascii[n] + 1;

		// get next character
		file1.get(character);
		n = character;
	}

	// blank line
	cout << endl;

	string display;

	// display which characters are present and how many times
	for (int i = 0 ; i < 128 ; i++ )
	{
		if ( ascii[i] != 0 )
		{

			// display output
			switch (i)
				{
				// SPECIAL CHARACTERS
				case(0): display = "NUL"; break;
				case(1): display = "SOH"; break;
				case(2): display = "STX"; break;
				case(3): display = "ETX"; break;
				case(4): display = "EOT"; break;
				case(5): display = "ENQ"; break;
				case(6): display = "ACK"; break;
				case(7): display = "BEL"; break;
				case(8): display = "BS"; break;
				case(9): display = "HT"; break;
				case(10): display = "LF"; break;
				case(11): display = "VT"; break;
				case(12): display = "FF"; break;
				case(13): display = "CR"; break;
				case(14): display = "SO"; break;
				case(15): display = "SI"; break;
				case(16): display = "DLE"; break;
				case(17): display = "DC1"; break;
				case(18): display = "DC2"; break;
				case(19): display = "DC3"; break;
				case(20): display = "DC4"; break;
				case(21): display = "NAK"; break;
				case(22): display = "SYN"; break;
				case(23): display = "ETB"; break;
				case(24): display = "CAN"; break;
				case(25): display = "EM"; break;
				case(26): display = "SUB"; break;
 				case(27): display = "ESC"; break;
				case(28): display = "FS"; break;
				case(29): display = "GS"; break;
				case(30): display = "RS"; break;
				case(31): display = "US"; break;
				case(32): display = "SP"; break;
				case(127): display = "DEL"; break;
				default:
					character = i;
					display = character;
					break;
				}
			cout << "The character '" << display << "' appears " << ascii[i] << " time(s)" << endl;
		}
	}

	// blank line
	cout << endl;

	// exit program
	return 0;

}
