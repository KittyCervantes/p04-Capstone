//Author: Bianca Cervantes
#include<iostream>
#include<string>
#include<vector>
#include "receipt.h"

using namespace std;

string imputReceipt(int &, int &);
void invalidAnswer(string &);
void printTotals(int, int, int,double,double,double,double);

int main()
{       receipt invoice;
        string type;
        char input;
        int yours=0;
        int borrowed=0;
        double cost,sum,r,u,n,e;


        //welcome user
        cout<<"-------Welcome to your expenses organizer!-------"<<endl<<"Please enter your receipt information as prompted"<<endl;

        do
        {

                type=imputReceipt(yours, borrowed);

                cout<<"Expense total: ";
                cin>>cost;
                sum+=cost;


                invoice.processing(cost,type);

                cout<<"Thank You! Would you like to add another receipt?"<<endl<<"If yes, press any key, otherwise press (x)"<<endl;
                cin>>input;

                //do while loop to keep inputting receipts
        }while( input!= 'x' && input!='X');


        r= invoice.miscTotals();
        u= invoice.billTotals();
        n= invoice.foodTotals();
        e= invoice.eduTotals();

        printTotals(yours,borrowed,sum,r,u,n,e);


        return 0;
}


string imputReceipt(int & yours, int & borrowed)
{ 
        double cost;
        string type,currency;
        int grand;

        cout<<"Was the purchase made with debit or credit?"<<endl;
        cin>>currency;

        while(currency!="debit" && currency!="credit")
        {
                invalidAnswer(currency);
        }

        if(currency=="debit")
        {
                yours++;
        }
        if(currency=="credit")
        {
                borrowed++;
        }

        cout<<"Is the receipt for 'food', 'bills', 'education', or 'misc' ?"<<endl;
        cin>>type;

        while(type!="food" && type!="bills" && type!="education" && type!="misc")
        {
                invalidAnswer(type);
        }

        return type;

}

void invalidAnswer(string & retry)
{
        cout<<"The text entered was not a valid answer, please only use the options provided."<<endl;
        cin>>retry;
}

void printTotals(int yours, int borrowed, int todo, double r,double u,double n,double e) //todo means all
{receipt invoice;

        cout<<"------------------------Here's your average Spending totals!-------------------------"<<endl;
        cout<<"School: "<<e<<" , Food: "<<n<<" , Bills: "<<u<<" , Misc: "<<r<<endl;
        cout<<"Your total average spending is: "<<todo/(yours+borrowed)<<endl;


        if(borrowed>yours)
        {
                cout<<"You seem to use your credit card very often. Depending on it too much can be bad.\n Try cutting down on your credit usage to avoid getting in over your head!"<<endl;
        }

}
