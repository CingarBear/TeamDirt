/*************************************************************************
 * AUTHOR		: Oxeford & CingarBear
 * LAB #14      : Intro to OOP
 * CLASS		: CS1B
 * SECTION		: TTh 8am
 * DUE DATE		: 4/2/15
 *************************************************************************/

#include "GetAndCheckInput.h"

/*************************************************************************
 * 	FUNCTION GetAndCheckCharInput
 * -----------------------------------------------------------------------
 * 		This function will accept a single character as input and error
 * 		check it to ensure is is a valid gender response.
 * 	- returns a valid single character response received as input
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS:
 *		PROMPT		: prompt for getting character response.
 *
 * POST-CONDITIONS:
 *		checkChar 	: single character returned to main after it is error
 *				 	  checked.
 *************************************************************************/

char GetAndCheckInput (const string PROMPT,// IN - response prompt
						   char validChar1,	   // IN - valid char response
						   char validChar2)    // IN - valid char response
{
	bool invalidInput; 	// CALC 	- checks if input is valid or not
	char charCheck;		// IN & OUT - play again? y/n



	invalidInput = (charCheck != validChar1 && charCheck != validChar2);

	cout << left;

	// ERROR CHECKS CHARACTER RESPONSE
	do
	{
		// PROMPTS USER FOR A YES OR NO RESPONSE
		cout  << setw(PROMPT_COL) << PROMPT;
		cin.get(charCheck);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		charCheck = toupper(charCheck);

		invalidInput = (charCheck != validChar1 && charCheck != validChar2);
		if (invalidInput)
		{
			cout << "\n**** INVALID INPUT - Please enter valid response ****\n";
		}

	}while(invalidInput);

	cout << right;

	return charCheck;
}
