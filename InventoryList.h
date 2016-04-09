
#ifndef INVENTORYLIST_H_
#define INVENTORYLIST_H_

#include "Inventory.h"

struct InList
{
    InList*   prev;
    Inventory  item;
    InList*   next;
};

class InventoryList: public Inventory {
public:
	InventoryList();

	virtual ~InventoryList();


    InList* CreateInList(InList* head, string fileName);
    InList* AddItem(InList* head, Inventory newNode);
    InList* ClearInList(InList* head);
    bool IsEmpty(InList* head);
};

#endif /* INVENTORYInList_H_ */
