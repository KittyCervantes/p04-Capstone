//Author: Bianca Cervantes
#include<string>
#ifndef _RECEIPT_H
#define _RECEIPT_H

class receipt
{
        private:
                double cost;
                std::string categ;

        public:
                receipt();
                void setPurchase(double);
                void addCategory(std::string);
};
#endif
