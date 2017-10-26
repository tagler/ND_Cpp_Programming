// -------------------------------------------------------------------------------------
// ex8-14
// -------------------------------------------------------------------------------------
// class implementation for date class

#include "Date.h"
#include <iostream>

// definition of default constructor
Date::Date(): month(1), day(0), year(0)
{}
// definition of default constructor
Date::Date(int m, int d, int y): month(m), day(d), year(y)
{}
void Date::input_date(istream& fin)
{
	// take input in form mm/dd/yy
	fin >> month;
	if ( fin.peek() != '/' ) {}
	fin.ignore();
	fin >> day;
	if ( fin.peek() != '/' ) {}
	fin.ignore();
	fin>> year;
	// void return
	return;
}

void Date::print_date(ostream& fout)
{
	// output
	fout << month << '/' << day << '/' << year;
	// void return
	return;
}

void Date::print_date_monthname(ostream& fout)
{
	// print month
	switch(month)
	{
		// month name conversions
		case (1): fout << "January " << day << ", " << year; break;
		case (2): fout << "February " << day << ", " << year; break;
		case (3): fout << "March " << day << ", " << year; break;
		case (4): fout << "April " << day << ", " << year; break;
		case (5): fout << "May " << day << ", " << year; break;
		case (6): fout << "June " << day << ", " << year; break;
		case (7): fout << "July " << day << ", " << year; break;
		case (8): fout << "August " << day << ", " << year; break;
		case (9): fout << "September " << day << ", " << year; break;
		case (10): fout << "October " << day << ", " << year; break;
		case (11): fout << "November " << day << ", " << year; break;
		case (12): fout << "December " << day << ", " << year; break;
		default: break;
	}
	// void return
	return;
}
