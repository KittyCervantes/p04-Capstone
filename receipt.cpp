//Author: Bianca Cervantes
#include "receipt.h"
#include<iostream>


void receipt::setPurchase(double total)
{
cost=total;
}

void receipt::addCategory(std::string sort)
{
categ=sort;
}

receipt::receipt()
{
cost=0.0;
categ="misc"; //purchase category ie. education,food, etc.
}
