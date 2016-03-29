#ifndef MEMBERLIST_H
#define MEMBERLIST_H

#include <member.h>
#include <QDebug>
using namespace std;

struct List
{
    List*   prev;
    Member  member;
    List*   next;
};

class MemberList : public Member
{
    public :
        MemberList();

        List* CreateList(List* head, QString fileName);
        List* AddNode(List* head, Member newNode);
        List* ClearList(List* head);
        bool IsEmpty(List* head);
};

#endif // MEMBERLIST_H

