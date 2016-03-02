#include "ExecutiveMember.h"

/***************
 * Constructors
 ***************/
 ExecutiveMember::ExecutiveMember()\
 {
	 rebate = 0;
}
 ExecutiveMember::ExecutiveMember(double 	newRebate,
				 string 	newName,
				 int 		newMemNum,
				 string 	newMemType,
				 Date 		newExpire,
				 double 	newtab)
 {
	 rebate = newRebate;
	 Member(newName,
			newMemNum,
			newMemType,
			newExpire,
			newtab);
 }

 /**************
  * Destrustor
  **************/
 ExecutiveMember::~ExecutiveMember(){}

 /**********
  * Getters
  **********/
 double 	 ExecutiveMember::GetRebate(){return rebate;}

 /**********
  * Setters
  **********/
void 	 ExecutiveMember::SetRebate(double newRebate){rebate = newRebate;}


