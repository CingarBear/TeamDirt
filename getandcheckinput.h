#ifndef GETANDCHECKINPUT_H_
#define GETANDCHECKINPUT_H_

#include "header.h"
#include <QString>

using namespace std;

/*************************************************************************
 * 	FUNCTION GetAndCheckInput
 * 		This function will accept a single character as input and error
 * 		check it to ensure is is a valid gender response.
 * 	- returns a valid single character response received as input
 *************************************************************************/
char GetAndCheckInput (const QString PROMPT,// IN - response prompt
                           char validChar1,	   // IN - valid char response
                           char validChar2);   // IN - valid char response

/**************************************************************************
* FUNCTION GetAndCheckInput
* 	This function prompts the user a prompt and receives integer input.
*	 It will error check the input and check if it is within boundaries.
* 	 It will return the valid integer input.
**************************************************************************/
int GetAndCheckInput( QString prompt,        // IN - prompt for user
                       QString errorMessage,	 // IN - Error message
                       int    min,           // IN - minimum boundary
                       int    max);          // IN - maximum boundary

/**************************************************************************
* FUNCTION GetAndCheckInput
* 	This function prompts the user a prompt and receives float input.
* 	It will error check the input and check if it is within boundaries.
* 	It will return the valid integer input.
**************************************************************************/
float GetAndCheckInput(QString prompt,        // IN - prompt for user
                       QString errorMessage,	 // IN - Error message
                       float    min,           // IN - minimum boundary
                       float    max);           // IN - maximum boundary



#endif /* GETANDCHECKINPUT_H_ */
