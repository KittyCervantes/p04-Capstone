//Author: Bianca Cervantes
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{

double cost;
string categ, method;
char input;
//welcome user
cout<<"-------Welcome to your expenses organizer!-------"<<endl<<"Please enter your receipt information as prompted"<<endl;

do
{
cout<<"Expense total: ";
cin>>cost;
cout<<"Is the receipt for 'food', 'bills', 'education', or 'misc' ?"<<endl;
cin>>categ;
cout<<"Was the purchase made with cash, debit or credit?"<<endl;
cin>>method;

cout<<"Thank You! Would you like to add another receipt?"<<endl<<"If yes, press any key, otherwise press (x)"<<endl;
cin>>input;

//do while loop to keep inputting receipts
}while( input!= 'x' );

//class food, bills, education, misc
//funtion to keep track of class spending(vector)
//function to tally total
//function that shows average spending and class averages






}
