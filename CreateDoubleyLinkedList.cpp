/***********************************************************************
 * AUTHOR		 : CingarBear & DeBaggis
 * Lab #13 		 : Create an Ordered List
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-31-15
 ***********************************************************************/

#include "header.h"

/*************************************************************************
 *  CreateDoubleyLinkedList
 *    This function creates a linked list of struct variables named
 *    "memberNode". It creates a new node, fills that node with information
 *    from an input file. Then adds that node to the linked list. Then the
 *    function will loop until the input file has no more information, or
 *    if the pointer is accessing unreserved memory (NULL).
 *  RETURNS: The head of the linked list.
 * _______________________________________________________________________
 * PRE-CONDITIONS:
 * 		head		: Declared in main
 * 		fileName    : Defined in main.
 *
 * POST-CONDITIONS:
 * 		head		: Defined in this function
 ************************************************************************/
memberNode* CreateDoubleyLinkedList(memberNode *head, //IN - the head of the stack
					                string fileName)  //IN - The input file being
													  // used
{
	ifstream inFile;

	head = NULL;

	memberNode *perPtr;
	perPtr = new memberNode;
	memberNode *searchPtr;

	inFile.open(fileName.c_str());


	while(inFile && perPtr != NULL)
	{
//		getline(inFile,perPtr->name);
//		inFile.get(perPtr->gender);
//		inFile.ignore(10000,' ');
//		inFile >> perPtr->age;
//		inFile.ignore(10000,'\n');
//		inFile.ignore(10000,'\n');


		cout << "Adding : " << perPtr ->member.GetName() << endl;

		if(head == NULL)
		{
			perPtr -> prev = head;
			perPtr -> next = head;
			head = perPtr;

		}
		else if(head->next == NULL)
		{
			if(perPtr->member.GetName() < head->member.GetName())
			{
				perPtr->next = head;
				head->prev = perPtr;
				perPtr->prev = NULL;
				head = perPtr;
			}
			else
			{
				head   ->next = perPtr;
				perPtr ->prev = head;
				perPtr ->next = NULL;
			}
		}
		else
		{
			searchPtr = head;

			if(perPtr->member.GetName() < searchPtr->member.GetName())
			{
				perPtr->next = head;
				head->prev = perPtr;
				perPtr->prev = NULL;
				head = perPtr;
			}
			else
			{
				while(perPtr->member.GetName() > searchPtr->member.GetName() && searchPtr->next != NULL)
				{
					searchPtr = searchPtr ->next;
				}

				if(searchPtr ->next == NULL)
				{
					searchPtr->next = perPtr;
					perPtr ->prev = searchPtr;
					perPtr ->next = NULL;
				}
				else
				{
					perPtr ->prev = searchPtr->prev;
					perPtr ->next = searchPtr;
					searchPtr->prev->next = perPtr;
					searchPtr->prev = perPtr;
				}
			}
		}

		perPtr = new memberNode;

	}



	inFile.close();
	delete perPtr;
	perPtr = NULL;



	return head;
}
