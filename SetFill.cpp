/*************************************************************************
 * AUTHOR		: RisQ & CingarBear
 * LAB #15      : Arrays & Linked Lists of Sheep
 * CLASS		: CS1B
 * SECTION		: TTh 8am
 * DUE DATE		: 4/9/15
 *************************************************************************/

#include "header.h"

/**************************************************************************
 * FUNCTION SetFill
 *_________________________________________________________________________
 * This function outputs a fill of a character for a set number of length.
 *_________________________________________________________________________
 * PRE-CONDITIONS (ALL MUST BE PREVIOUSLY DEFINED)
 *  Character  - Character to fill
 *  SET_W_SIZE - Setw() size
 *
 * POST-CONDITIONS
 * 	This function will return the output.str().
 *************************************************************************/

string SetFill(const char CHARACTER, const int SET_W_SIZE)
{
	ostringstream  output;

	output << setfill(CHARACTER) << setw(SET_W_SIZE) << CHARACTER;

	return output.str();
}
