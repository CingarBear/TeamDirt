
/***********************************************************************
 * AUTHOR		 : CingarBear & DeBaggis
 * Lab #7 		 : Movie List - Intro to Linked Lists
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-31-15
 ***********************************************************************/
#include "header.h"
/**************************************************************************
* FUNCTION IsEmpty
*__________________________________________________________________________
*
*  This function check to see if head is empty and returns a true or
*  false if it is filled or empty.
*
* PRE-CONDITIONS
* 	head   : head has to be previously defined
*
* POST-CONDITIONS
* RETURNS: head
**************************************************************************/
bool IsEmpty(memberNode *head)
{
    return head == NULL;
}
