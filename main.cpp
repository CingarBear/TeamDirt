#include "header.h"

int main()
{
	Date expireDate;
	string fileName;

	fileName = "input.txt";

	memberNode* head;
	memberNode* mPtr;
	head = NULL;

	head = CreateDoubleyLinkedList(head, fileName);

	mPtr = head;

	while(mPtr != NULL && !IsEmpty(head))
	{
		cout << left
			 << endl
			 << setw(20) << "Name: " << mPtr->member.GetName() << endl
			 << setw(20) << "Expiration Date: "
			 	 	 	 << mPtr->member.GetExpirationDate().GetDay() 	<< "/"
						 << mPtr->member.GetExpirationDate().GetMonth() << "/"
						 << mPtr->member.GetExpirationDate().GetYear() 	<< endl
			 << right;

		mPtr = mPtr->next;
	}


	return 0;
}
