#include "member.h"

/***************
 * Constructors
 ***************/
Member::Member(){}
Member::Member(QString 		newName,
               int 		    newMemNum,
               QString 		newMemType,
               Date 		newExpire,
               double 		newtab)
{
    name 		= newName;
    memNum 		= newMemNum;
    memType 	= newMemType;
    expire		= newExpire;
    tab 		= newtab;
}
/**************
 * Destrustor
 **************/
Member::~Member(){}

/**********
 * Getters
 **********/
QString 		Member::GetName()
            {return name;}
int 		Member::GetMemberNum()
            {return memNum;}
QString 		Member::GetMemberType()
            {return memType;}
Date 		Member::GetExpirationDate()
            {return expire;}
double 		Member::GetTab()
            {return tab;}
double 	 	Member::GetRebate()
            {return rebate;}

/**********
 * Setters
 **********/
void 		Member::SetAll(QString newName,
                   int 	  newMemNum,
                   QString newMemType,
                   Date   newExpire,
                   double newtab)
{
    name 		= newName;
    memNum 		= newMemNum;
    memType 	= newMemType;
    expire 		= newExpire;
    tab 		= newtab;
}
void 		Member::SetName(QString newName)
            {name = newName;}
void 		Member::SetMemberNum(int newMemNum)
            {memNum = newMemNum;}
void 		Member::SetMemberType(QString newMemType)
            {memType = newMemType;}
void 		Member::SetExpirationDate(Date newExpire)
            {expire = newExpire;}
void 		Member::SetTab(double newtab)
            {tab = newtab;}
void 	 	Member::SetRebate(double newRebate)
            {rebate = newRebate;}
