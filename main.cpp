//Author: Bianca Cervantes
#include<iostream>
#include<string>
#include<vector>
#include "receipt.h"

using namespace std;

void imputReceipt(string);
string invalidAnswer(string);
vector<double> printTotals(double);

int main()
{
        string method;
        char input;
        

        //welcome user
        cout<<"-------Welcome to your expenses organizer!-------"<<endl<<"Please enter your receipt information as prompted"<<endl;

        do
        {
                cout<<"Was the purchase made with debit or credit?"<<endl;
                cin>>method;
                if(method!="debit" && method!="credit")
                {
                        invalidAnswer(method);
                }

                imputReceipt(method); //different categories for debit or credit

                cout<<"Thank You! Would you like to add another receipt?"<<endl<<"If yes, press any key, otherwise press (x)"<<endl;
                cin>>input;

                //do while loop to keep inputting receipts
        }while( input!= 'x' && input!='X');

        return 0;
}


void imputReceipt(string currency)
{ 
        double cost;
        string type;
        receipt invoice;

        cout<<"Expense total: ";
        cin>>cost;
 
        invoice.setPurchase(cost);

        cout<<"Is the receipt for 'food', 'bills', 'education', or 'misc' ?"<<endl;
        cin>>type;
        if(type!="food" && type!="bills" && type!="education" && type!="misc")
        {
                invalidAnswer(type);
        }
        else
        {
                invoice.addCategory(type);
        }

}

string invalidAnswer(string retry)
{
        cout<<"The text entered was not a valid answer, please only use the options provided."<<endl;
        cin>>retry;
        return retry;
}

vector<double> printTotals(double avg)
{
        vector<double> activity;
        activity.resize(1);

        return activity;
        //temporary filler, edit this later
}
