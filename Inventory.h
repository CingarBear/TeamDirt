#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cctype>
#include <limits>
#include <ios>
#include <cstdlib>


using namespace std;

#ifndef INVENTORY_H_
#define INVENTORY_H_

class Inventory {
public:
    /***************
     * Constructors
     ***************/
	Inventory();
	Inventory(string newName, float newPrice, int newQuantity);
	virtual ~Inventory();


    //Getters
    string 	GetName();
    int 	GetQuantity();
    float 	GetPrice();

    void 		SetName(string newName);
    void 		SetPrice(float newPrice);
    void 		SetQuantity(int newQuantity);

private :
    string name;
    float price;
    int quantity;


};

#endif /* INVENTORY_H_ */
