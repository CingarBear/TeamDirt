
#include "InventoryList.h"

InventoryList::InventoryList() {
	// TODO Auto-generated constructor stub

}

InventoryList::~InventoryList() {
	// TODO Auto-generated destructor stub
}

InList* InventoryList::CreateInList(InList* head, string fileName)
{
    ifstream 	inFile;
    string      tempName;
    string 	name;
    float  price;
    int quantity;

    head = NULL;

    InList *perPtr;
    perPtr = new InList;
    InList *searchPtr;

    inFile.open(fileName.toStdString().c_str());


    while(inFile && perPtr != NULL)
    {
        getline(inFile, tempName);
        name = QString(tempName.c_str());
        inFile >> price;
        inFile.ignore(1000, '\n');
        inFile >> quantity;
        inFile.ignore(1000, '\n');



        perPtr->item.SetName(name);
        perPtr->item.SetPrice(price);
        perPtr->item.SetQuantity(quantity);


        if(head == NULL)
        {
            perPtr -> prev = head;
            perPtr -> next = head;
            head = perPtr;

        }
        else if(head->next == NULL)
        {
            if(perPtr->item.GetName() < head->item.GetName())
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

            if(perPtr->item.GetName() < searchPtr->item.GetName())
            {
                perPtr->next = head;
                head->prev = perPtr;
                perPtr->prev = NULL;
                head = perPtr;
            }
            else
            {
                while(perPtr->item.GetName() > searchPtr->item.GetName() && searchPtr->next != NULL)
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

        perPtr = new InList;

    }

    inFile.close();
    delete perPtr;
    perPtr = NULL;



    return head;
}
InList* InventoryList::AddItem(InList* head, Inventory newNode){

    string 	name;
    float price;
    int quantity


    InList *perPtr;
    perPtr = new InList;
    InList *searchPtr;


    if(head == NULL)
    {
        perPtr -> prev = head;
        perPtr -> next = head;
        head = perPtr;

    }
    else if(head->next == NULL)
    {
        if(perPtr->item.GetName() < head->item.GetName())
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

        if(perPtr->item.GetName() < searchPtr->item.GetName())
        {
            perPtr->next = head;
            head->prev = perPtr;
            perPtr->prev = NULL;
            head = perPtr;
        }
        else
        {
            while(perPtr->item.GetName() > searchPtr->item.GetName() && searchPtr->next != NULL)
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

    perPtr = new InList;

    delete perPtr;
    perPtr = NULL;

    return head;
}

InList* InventoryList::ClearInList(InList* head)
{
    InList *perPtr;

    perPtr = head;

    if (!IsEmpty(head))
    {
        cout << "\nCLEARING LIST:\n";
        while (!IsEmpty(perPtr))
        {
            perPtr = perPtr->next;
        }

        head = NULL;
    }

    delete perPtr;
    perPtr = NULL;

    return head;
}
bool InventoryList::IsEmpty(InList* head){
	return head == NULL;
}
