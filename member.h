#ifndef MEMBER_H_
#define MEMBER_H_

#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <QString>
#include <cctype>
#include <limits>
#include <ios>
#include <cstdlib>
#include "Date.h"

using namespace std;

class Member
{
    public :
        /***************
         * Constructors
         ***************/
        Member();
        Member(QString 		newName,
                int 		newMemNum,
                QString 	newMemType,
                Date 		newExpire,
                double 		newtab,
                float       newRebate);
        /**************
         * Destrustor
         **************/
        ~Member();

        /*******************
         * Member Functions
         *******************/

        //Getters
        QString 	GetName();
        int 		GetMemberNum();
        QString 	GetMemberType();
        Date 		GetExpirationDate();
        double 		GetTab();
        float       GetRebate();

        //Setters
        void 		SetAll(QString newName,
                           int 	  newMemNum,
                           QString newMemType,
                           Date   newExpire,
                           double newtab);
        void 		SetName(QString newName);
        void 		SetMemberNum(int newMemNum);
        void 		SetMemberType(QString newMemType);
        void 		SetExpirationDate(Date newExpire);
        void 		SetTab(double newtab);
        void        SetRebate(float newRebate);

    private :
        QString 	name;
        int 		memNum;
        QString 	memType;
        Date 		expire;
        double 		tab;
        float       rebate;





};




#endif /* MEMBER_H_ */
