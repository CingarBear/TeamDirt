/***********************************************************************
 * AUTHOR		 : CingarBear & DeBaggis
 * Lab #13 		 : Create an Ordered List
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-31-15
 ***********************************************************************/
#include "header.h"

/**************************************************************************
 * FUNCTION ClearList
 *__________________________________________________________________________
 *
 * This function receives the pointer head, it then displays
 * the names it will clear. After it displays the names in order of
 * input, it sets head to NULL.
 *__________________________________________________________________________
 * PRE-CONDITIONS
 * 	head   : head has to be previously defined
 *
 * POST-CONDITIONS
 * RETURNS: The empty list
 *
 **************************************************************************/

memberNode *ClearList(memberNode *head)  // IN - pointer head
{

	memberNode *perPtr;

	perPtr = head;

	if (!IsEmpty(head))
	{
		cout << "\nCLEARING LIST:\n";
		while (!IsEmpty(perPtr))
		{
			cout << "Removing ";
			cout <<  perPtr->member.GetName() << '!' <<  endl;
			perPtr = perPtr->next;
		}

		head = NULL;
	}
	else
	{
		cout << "\nThe list has been cleared!\n";
	}
	cout << endl;

	delete perPtr;
	perPtr = NULL;

	return head;
}
