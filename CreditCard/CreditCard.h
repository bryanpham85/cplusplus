
#define CREDIT_CARD_H

#include <string>
#include <iostream>

using namespace std;

class CreditCard{
    public:
        CreditCard(const string& no,const string& nm, int lim, double bal=0);
        //Accessor
        std::string getNumber() const {return number;}
        std::string getName() const {return name;}
        double getBalance() const {return balance;}
        int getLimit() const {return limit;}

        bool chargeIt(double price);
        void makePayment(double payment);
    private:
    std::string number;
    std::string name;
    int limit;
    double balance;
};

std::ostream & operator<<(ostream& out, const CreditCard &c);
