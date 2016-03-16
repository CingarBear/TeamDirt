/***********************************************************************
 * AUTHOR		 : CingarBear & DeBaggis
 * Lab #13 		 : Create an Ordered List
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-31-15
 ***********************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cctype>
#include <limits>
#include <ios>
#include <cstdlib>
#include "GetAndCheckInput.h"
#include "Date.h"
#include "Member.h"
#include "ExecutiveMember.h"

using namespace std;

/***********************************************************************
  GLOBAL CONSTANTS
  ---------------------------------------------------------------------
  	  WHOLE_LINE_LENGTH : Used for word wrapping
 ***********************************************************************/
const int WHOLE_LINE_LENGTH		= 75;
const int COL_WIDTH   		    = 17;
const int TITLE_WIDTH           = 40;
const int PROMPT_COL  			= 40;

const string PROGRAMMER		 = "CingarBear && DeBaggis";
const string CLASS		     = "CS1B";
const string SECTION		 = "TTH - 8am";
const string AS_NAME 		 = "Creating Ordered List";
const char 	 AS_TYPE 		 = 'L';
const int	 AS_NUM	 		 = 13;
const int    PROMPT_WIDTH	 = 75;
const int	 LOWBOUND 		 = 0;
const int	 UPBOUND		 = 7;

/***********************************************************************
  ENUMS
  ---------------------------------------------------------------------
  	  MenuOptions	: Enumerated types for the menu options
 ***********************************************************************/
enum MenuOptions
{
	EXIT,
	CREATE,
	DISPLAY,
	REVERSE,
	EMPTY,
	SEARCH,
	REMOVE,
	CLEAR

};

/***********************************************************************
  STRUCTS
  ---------------------------------------------------------------------

 ***********************************************************************/
struct memberNode
{
	memberNode* prev;
	Member 	    member;
	memberNode* next;
};

struct ExecMemberNode
{
	ExecMemberNode*     prev;
	ExecutiveMember 	execMember;
	ExecMemberNode*     next;
};

/**************************************************************************
 * PrintHeaderOstream
 *    This function receives an assignment name, type, number, and output
 * 	  variable, then outputs the appropriate header
 * RETURNS: nothing -> This will output the class heading.
 **************************************************************************/
string PrintHeaderStream(const string PROGRAMMER,// IN - name of programmer
					     const string CLASS,	 // IN - class abbreviation
					     const string SECTION,	 // IN - class day/time
					     const string AS_NAME,   // IN - name of assign
					     const char   AS_TYPE,   // IN - assign or lab
					     const int    AS_NUM);	 // IN - assign or lab #

/**************************************************************************
 * GetLongestStringLength
 * This function reads in two strings. It gets their lengths and compares
 * the two and returns the longest string length.
 *************************************************************************/
int LongestStringLength (string str1,	// IN - string one
			             string str2);  // IN - string two

/**************************************************************************
 * CreatLinkedList
 *    This function creates a linked list of struct variables named
 *    "memberNode". It creates a new node, fills that node with information
 *    from an input file. Then adds that node to the linked list. Then the
 *    function will loop until the input file has no more information, or
 *    if the pointer is accessing unreserved memory (NULL).
 * RETURNS -> The head of the new linked list.
 **************************************************************************/
memberNode* CreateDoubleyLinkedList(memberNode *head, //IN/OUT - The head
													  // of the linked list
									string fileName); //IN - The name of the
													  // input file the user
											 	 	  // wants to use

/**************************************************************************
 * CreatLinkedList
 *    This function creates a linked list of struct variables named
 *    "memberNode". It creates a new node, fills that node with information
 *    from an input file. Then adds that node to the linked list. Then the
 *    function will loop until the input file has no more information, or
 *    if the pointer is accessing unreserved memory (NULL).
 * RETURNS -> The head of the new linked list.
 **************************************************************************/
ExecMemberNode* CreateDoubleyLinkedList(ExecMemberNode *head, //IN/OUT - The head
													  	  	  // of the linked list
										string   fileName); //IN - The name of the
													  	  	// input file the user
											 	 	  	    // wants to use

/**************************************************************************
 * ChooseInputFile
 * This function asks the user if they want to use a default file or if they
 * want to use another input file.
 *
 * RETURNS: Input File
 *************************************************************************/
string ChooseInputFile();

/**************************************************************************
 * IsEmpty
 * 	This function check to see if head is empty and returns a true or
 * 	false if it is filled or empty.
 *
 * RETURNS: nothing
 *************************************************************************/
bool IsEmpty(memberNode *head);		// IN - pointer head

/**************************************************************************
 * ClearList
 * 	This function clears the entire list
 *
 * RETURNS: The new head
 *************************************************************************/
memberNode *ClearList(memberNode *head); // IN - pointer head

/**************************************************************************
 * SearchList
 * 	This function searches for a string value and removes that item from
 * 	the list along with all its other information.
 *
 * RETURNS: The new node
 *************************************************************************/
memberNode *RemoveFromList(memberNode *head,			// IN - pointer head
							    string searchString);   // IN - String the
														// user is searching
														// for

/**************************************************************************
 * FUNCTION SetFill
 * ---------------------------------------------------------------------
 *	This function outputs a fill of a character for a set number
 *	of length.
 * ---------------------------------------------------------------------
 * Returns: Nothing
 *************************************************************************/
string SetFill(const char CHARACTER,  //IN   - Character to replicate
			   const int SET_W_SIZE); //CALC - Size of setw()

#endif /* HEADER_H_ */
