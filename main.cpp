#include "mainmenu.h"
#include <QApplication>
#include "header.h"
#include <qfile.h>

#include <qdebug.h>

int main(int argc, char *argv[])
{

    //Date expireDate;
//    QFile fileName();
//    fileName = "input.txt";
//    memberNode* head;
//    memberNode* mPtr;
//    head = NULL;
//    head = CreateDoubleyLinkedList(head, fileName);
//    mPtr = head;
//    while(mPtr != NULL && !IsEmpty(head))
//    {
//        cout << left
//             << endl
//             << setw(20) << "Name: " << mPtr->member.GetName() << endl
//             << setw(20) << "Expiration Date: "
//                         << mPtr->member.GetExpirationDate().GetDay() 	<< "/"
//                         << mPtr->member.GetExpirationDate().GetMonth() << "/"
//                         << mPtr->member.GetExpirationDate().GetYear() 	<< endl
//             << right;

//        mPtr = mPtr->next;
//    }

    QApplication a(argc, argv);
    MainMenu w;
    w.show();

    return a.exec();
}
