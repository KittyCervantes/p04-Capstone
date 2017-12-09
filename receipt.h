//Author: Bianca Cervantes
#ifndef _RECEIPT_H
#define _RECEIPT_H
#include<string>

class receipt
{
        private:
                double cost;
                std::string categ;
                vector<double>school;//education
                vector<double>rand;//random ( misc )
                vector<double>util;//utilities
                vector<double>nom; //food
        public:
                receipt();
                void processing(double, std::string);
                double foodTotals(); 
                double eduTotals();
                double billTotals();
                double miscTotals();
};
#endif
