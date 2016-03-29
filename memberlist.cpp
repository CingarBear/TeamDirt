#include <memberlist.h>
#include <fstream>
#include <iostream>

MemberList::MemberList()
{

}

/*************************************************************************
 *  CreateList
 *    This function creates a linked list of struct variables named
 *    "List". It creates a new node, fills that node with information
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
List* MemberList::CreateList(List *head,      //IN - the head of the stack
                 QString fileName)            //IN - The input file being
                                              //     used
{
    ifstream 	inFile;
    Date 		date;
    string      tempName,
                tempType;
    QString 	name,
                type;
    int			memNum,
                d,
                m,
                y;
    double 		newTab;

    head = NULL;

    List *perPtr;
    perPtr = new List;
    List *searchPtr;

    inFile.open(fileName.toStdString().c_str());


    while(inFile && perPtr != NULL)
    {
        getline(inFile, tempName);
        name = QString(tempName.c_str());
        inFile >> memNum;
        inFile.ignore(1000, '\n');
        getline(inFile, tempType);
        type = QString(tempType.c_str());
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

        perPtr->member.SetAll(name,
                              memNum,
                              type,
                              date,
                              newTab);

        qDebug() << "Adding : " << perPtr ->member.GetName() << endl;

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

        perPtr = new List;

    }

    inFile.close();
    delete perPtr;
    perPtr = NULL;



    return head;
}

List* MemberList::AddNode(List* head, Member newNode)
{
    Date 		date;
    QString 	name,
                type;
    int			memNum,
                d,
                m,
                y;
    double 		newTab;

    List *perPtr;
    perPtr = new List;
    List *searchPtr;

//    perPtr = newNode;

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

    perPtr = new List;

    delete perPtr;
    perPtr = NULL;

    return head;
}

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
bool MemberList::IsEmpty(List *head)
{
    return head == NULL;
}


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

List* MemberList::ClearList(List *head)  // IN - pointer head
{

    List *perPtr;

    perPtr = head;

    if (!IsEmpty(head))
    {
        cout << "\nCLEARING LIST:\n";
        while (!IsEmpty(perPtr))
        {
//			cout << "Removing ";
//			cout <<  perPtr->member.GetName() << '!' <<  endl;
            perPtr = perPtr->next;
        }

        head = NULL;
    }
//	else
//	{
//		cout << "\nThe list has been cleared!\n";
//	}
//	cout << endl;

    delete perPtr;
    perPtr = NULL;

    return head;
}
