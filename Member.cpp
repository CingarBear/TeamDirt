#include "Member.h"

/***************
 * Constructors
 ***************/
Member::Member(){}
Member::Member(string 		newName,
			   int 		    newMemNum,
			   string 		newMemType,
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
string 		Member::GetName()
			{return name;}
int 		Member::GetMemberNum()
			{return memNum;}
string 		Member::GetMemberType()
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
void 		Member::SetAll(string newName,
				   int 	  newMemNum,
				   string newMemType,
				   Date   newExpire,
				   double newtab)
{
	name 		= newName;
	memNum 		= newMemNum;
	memType 	= newMemType;
	expire 		= newExpire;
	tab 		= newtab;
}
void 		Member::SetName(string newName)
			{name = newName;}
void 		Member::SetMemberNum(int newMemNum)
			{memNum = newMemNum;}
void 		Member::SetMemberType(string newMemType)
			{memType = newMemType;}
void 		Member::SetExpirationDate(Date newExpire)
			{expire = newExpire;}
void 		Member::SetTab(double newtab)
			{tab = newtab;}
void 	 	Member::SetRebate(double newRebate)
			{rebate = newRebate;}
