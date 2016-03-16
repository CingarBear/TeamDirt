#include "header.h"

ExecMemberNode* CreateDoubleyLinkedList(ExecMemberNode *head, //IN/OUT - The head
													  	  	  // of the linked list
										string   fileName)    //IN - The name of the
													  	  	  // input file the user
											 	 	  	      // wants to use
{
	ExecMemberNode *perPtr;
	ExecMemberNode *searchPtr;

	ifstream 	inFile;
	Date 		date;
	string 		name,
				type;
	int			memNum,
				d,
				m,
				y;
	double 		newTab;

	head = NULL;

	perPtr = new ExecMemberNode;

	inFile.open(fileName.c_str());

	while(inFile && perPtr != NULL)
	{
		getline(inFile, name);
		inFile >> memNum;
		inFile.ignore(1000, '\n');
		getline(inFile, type);
		inFile >> d;
		inFile.ignore(1000, '\n');
		inFile >> m;
		inFile.ignore(1000, '\n');
		inFile >> y;
		inFile.ignore(1000, '\n');
		inFile >> newTab;
		inFile.ignore(1000, '\n');
		inFile.ignore(1000, '\n');

		date.SetDayMonthAndYear(d,m,y);

		perPtr->execMember.SetAll(name,
							  memNum,
							  type,
							  date,
							  newTab);

		cout << "Adding : " << perPtr ->execMember.GetName() << endl;

		if(head == NULL)
		{
			perPtr -> prev = head;
			perPtr -> next = head;
			head = perPtr;

		}
		else if(head->next == NULL)
		{
			if(perPtr->execMember.GetName() < head->execMember.GetName())
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

			if(perPtr->execMember.GetName() < searchPtr->execMember.GetName())
			{
				perPtr->next = head;
				head->prev = perPtr;
				perPtr->prev = NULL;
				head = perPtr;
			}
			else
			{
				while(perPtr->execMember.GetName() > searchPtr->execMember.GetName() && searchPtr->next != NULL)
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

		perPtr = new ExecMemberNode;

	}

	inFile.close();
	delete perPtr;
	perPtr = NULL;



	return head;
}
