/***********************************************************************
 * AUTHOR		 : CingarBear & DeBaggis
 * Lab #13 		 : Create an Ordered List
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-31-15
 ***********************************************************************/
#include "header.h"

/*************************************************************************
 *  FUNCTION RemoveFromList
 * 		This function removes a certain item from a doubley linked list.
 * 		The item removed is dependent on the input from the user.
 *
 * 		- returns: The new list
 * _______________________________________________________________________
 * PRE-CONDITIONS:
 * 		head  				: Must be previously defined
 * 		searchString		: Must be previously defined
 *
 * POST-CONDITIONS:
 * 		head			 	: Will be changed in this function
 ************************************************************************/

memberNode *RemoveFromList(memberNode *head,		// IN / OUT- The head
													// of the list
						       string searchString) // IN - The string the
													// user is searching for
{

	memberNode *perPtr;
	bool found;

	perPtr = head;

	found = false;

	cout << "\nSearching for " << searchString << "...\n";
	while(!found && perPtr != NULL)
	{
		if(perPtr->member.GetName() != searchString)
		{
			perPtr = perPtr->next;
		}
		else
		{
			found = true;
		}
	}


	if(!found)
	{
		cout << "I'm sorry, \"" << searchString << "\" was NOT found!\n\n";
	}
	else
	{
		cout << "Removing " << searchString << '!';
		if(perPtr ->next == NULL)
		{
			perPtr->prev->next = NULL;
		}
		else if(perPtr ->prev == NULL)
		{
			perPtr->next->prev = NULL;
			head = perPtr->next;
		}
		else
		{

			perPtr->next->prev = perPtr -> prev;
			perPtr->prev->next = perPtr -> next;
		}


		cout << endl;

		delete perPtr;
		perPtr = NULL;

	}

	return head;
}
