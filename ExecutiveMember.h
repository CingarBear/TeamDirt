#ifndef EXECUTIVEMEMBER_H_
#define EXECUTIVEMEMBER_H_

#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cctype>
#include <limits>
#include <ios>
#include <cstdlib>
#include "Member.h"
using namespace std;

class ExecutiveMember : public Member
{
	public:
	/***************
	 * Constructors
	 ***************/
		 ExecutiveMember();
		 ExecutiveMember(double 	newRebate,
						 string 	newName,
						 int 		newMemNum,
						 string 	newMemType,
						 Date 		newExpire,
						 double 	newtab);
	/**************
	 * Destrustor
	 **************/
		~ExecutiveMember();

	/*******************
	 * Member Functions
	 *******************/
		//Setters
		void 	SetRebate(double newRebate);

		//Getters
		double 	GetRebate();

	private:
		double rebate;

};



#endif /* EXECUTIVEMEMBER_H_ */
