/*************************************************************************
 * AUTHOR		: Oxeford & CingarBear
 * LAB #14      : Intro to OOP
 * CLASS		: CS1B
 * SECTION		: TTh 8am
 * DUE DATE		: 4/2/15
 *************************************************************************/

#include "header.h"

/*************************************************************************
 *  FUNCTION PrintHeaderStream
 * 		This function will output the header, including the names of the
 * 		programmers, class and assignment information.
 * 		- returns: the class header as a string stream
 * _______________________________________________________________________
 * PRE-CONDITIONS:
 * 		PROGRAMMER  : predefined in main
 * 		CLASS		: predefined in main
 * 		SETION		: predefined in main
 * 		ASSIGN_NUM  : predefined in main
 * 		ASSIGN_TYPE : predefined in main
 * 		ASSIGN_NAME : predefined in main
 *
 * POST-CONDITIONS:
 * 		This function will return the class heading as a string
 ************************************************************************/
string PrintHeaderStream()
{
	ostringstream output;

	output << left;
	output << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	output << "\n*  " << setw(14) << "CLASS"  << ": " << CLASS;
	output << "\n*  " << setw(14) << "SECTION"  << ": " << SECTION;
	if (toupper(AS_TYPE) == 'L')
	{
		output << "\n*  LAB #" << setw(9);
	}
	else
	{
	output << "\n*  ASSIGNMENT #" << setw(2);
	}
	output << AS_NUM << ": " << AS_NAME;
	output << endl << SetFill('*', 54) << endl;
	output << right;

	return output.str();
}
