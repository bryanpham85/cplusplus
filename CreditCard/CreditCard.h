#ifdef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include <iostream>

class CreditCard{
    public:
        CreditCard(const std::string& no,       //constructor
            const std::string nm, int lim, double bal=0);
        //Accessor
        std::string getNumber() const {return number;}
        std::string getName() const {return name;}
        double getBalance() const {return balance;}
        int getLimit() const {return limit;}

        bool chargeIt(double price);
        void makePayment(double payment);
    private:
    std::string number;
    str::string name;
    int limit;
    double balance;
};

std::ostream & operator<<(std:ostream& out, const CreditCard &c);
#endif