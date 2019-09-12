#include <vector>
#include "CreditCard.h"

using namespace std;

void testCard(){
    vector<CreditCard*> wallet(10);
    wallet[0] = new CreditCard("5391 0375 9387 5309", "John Bowman", 2500); 
    wallet[1] = new CreditCard("3485 0399 3395 1954", "John Bowman", 3500); 
    wallet[2] = new CreditCard("6011 4902 3294 2994", "John Bowman", 5000);

    for(int i = 0; i < 16; i++){
        wallet[0]->chargeIt(double(i));
        wallet[1]->chargeIt(2*i);
        wallet[2]->chargeIt(double(3*i));
    }

    cout << "Card payment :\n";
    for(int j=0; j<3;j++){
        cout << *wallet[j];
        while (wallet[j]->getBalance() > 100.0)
        {
            wallet[j]->makePayment(100.0);
            cout << "New Balance = " << wallet[j]->getBalance() << "\n";
        }
        cout << "\n";
        delete wallet[j];
        
    }
}

int main(){
    testCard();
    return EXIT_SUCCESS;
}