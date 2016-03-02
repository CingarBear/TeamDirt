/*************************************************************************
 * AUTHOR		: Oxeford & CingarBear
 * LAB #14      : Intro to OOP
 * CLASS		: CS1B
 * SECTION		: TTh 8am
 * DUE DATE		: 4/2/15
 *************************************************************************/

#include "GetAndCheckInput.h"

/**************************************************************************
* FUNCTION GetAndCheckIntInp
*__________________________________________________________________________
* This function prompts the user a prompt and receives integer input.
* It will error check the input and check if it is within boundaries.
* It will return the valid integer input.
*__________________________________________________________________________
 * PRE-CONDITIONS (ALL MUST BE PREVIOUSLY DEFINED)
* 	prompt : prompt has to be previously defined
* 	intInp : intInp has to be previously defined (passed by reference)
* 	min    : minimum has to be previously defined
* 	max    : maximum has to be previously defined
*
* POST-CONDITIONS
*   This function returns the valid integer input
**************************************************************************/

int GetAndCheckInput( string prompt,        // IN - prompt for user
					   string errorMessage,	 // IN - Error message
					   int    min,           // IN - minimum boundary
				       int    max)           // IN - maximum boundary
{
	int  input;
	bool invalid;
	ostringstream error;
	int errorLength;
	int newSetWLength;
	int lengthToAdd;

	lengthToAdd = 0;

	do
	{
		invalid = false;

		cout << left;

		cout << setw(PROMPT_COL) << prompt;
		if(!(cin >> input))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << endl
				 << setw(errorMessage.length())
				 << errorMessage
				 << "****" ;
			cout << endl << endl;
			invalid = true;
		}
		else
		{
			invalid = input < min || input > max;

			if(invalid)
			{

				error << "**** The number " << input << " is an invalid entry";
				errorLength = error.str().length();

				if (error.str().length() < errorMessage.length())
				{
					newSetWLength = errorMessage.length() - errorLength;

					cout << endl
						 << error.str() << setw(newSetWLength) << ' ' << "****";
				}

				cout << endl << setw(errorMessage.length() + lengthToAdd)
					 << errorMessage
					 << "****" ;
				cout << endl << endl;

			}
		}

		error.str("");

	}while(invalid);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << right;

	return input;
}
