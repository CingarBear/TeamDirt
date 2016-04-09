/*
 * Inventory.cpp
 *
 *  Created on: Apr 8, 2016
 *      Author: chazd
 */

#include "Inventory.h"

Inventory::Inventory() {
	// TODO Auto-generated constructor stub

}

Inventory::Inventory(string newName, float newPrice, int newQuantity){
	name = newName;
	price = newPrice;
	quantity = newQuantity;
}

Inventory::~Inventory() {
	// TODO Auto-generated destructor stub
}

string 	Inventory::GetName()
            {return name;}
int 	Inventory::GetQuantity()
            {return quantity;}
float 	Inventory::GetPrice()
            {return price;}

void 		Inventory::SetName(string newName)
            {name = newName;}
void 		Inventory::SetQuantity(int newQuantity)
            {quantity = newQuantity;}
void 		Inventory::SetPrice(float newPrice)
            {price = newPrice;}
