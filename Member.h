#ifndef MEMBER_H_
#define MEMBER_H_

#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
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
		Member(string 		newName,
				int 		newMemNum,
				string 		newMemType,
				Date 		newExpire,
				double 		newtab);
		/**************
		 * Destrustor
		 **************/
		~Member();

		/*******************
		 * Member Functions
		 *******************/

		//Getters
		string 		GetName();
		int 		GetMemberNum();
		string 		GetMemberType();
		Date 		GetExpirationDate();
		double 		GetTab();
		double 		GetRebate();

		//Setters
		void 		SetAll(string newName,
						   int 	  newMemNum,
						   string newMemType,
						   Date   newExpire,
						   double newtab);
		void 		SetName(string newName);
		void 		SetMemberNum(int newMemNum);
		void 		SetMemberType(string newMemType);
		void 		SetExpirationDate(Date newExpire);
		void 		SetTab(double newtab);
		void 		SetRebate(double newRebate);

		//Setters


		//Getters


	private :
		string 		name;
		int 		memNum;
		string 		memType;
		Date 		expire;
		double 		tab;
		double 		rebate;





};




#endif /* MEMBER_H_ */
