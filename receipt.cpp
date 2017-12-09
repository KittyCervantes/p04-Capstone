//Author: Bianca Cervantes
#include "receipt.h"
#include<iostream>
#include<vector>
void receipt::processing(double total,std::string type)
{       categ=type;
        cost=total;
        if(type=="food")
        { nom.push_back(total); }

        if(type=="bills")
        { util.push_back(total); }

        if(type=="education")
        { school.push_back(total); }

        if(type=="misc")
        { rand.push_back(total); }

}
//vectors-> school,rand,util,nom

double receipt::foodTotals()
{ 
        double total=0;
        for(i=0;i<nom.size();i++)
        {
                total+=nom[i];
        }
        return total/nom.size();
}

double receipt::eduTotals()
{
        double total=0;
        for(i=0;i<school.size();i++)
        {
                total+=school[i];
        }
        return total/school.size();
}



double receipt::billTotals()
{       double total=0;
        for(i=0;i<util.size();i++)
        {
                total+=util[i];
        }
        return total/util.size();
}



double receipt::miscTotals()
{       double total=0;
        for(i=0;i<rand.size();i++)
        {
                total+=rand[i];
        }
        return total/rand.size();
}



receipt::receipt()
{
        cost=0.0;
        categ="misc"; //purchase category ie. education,food, etc.
}
