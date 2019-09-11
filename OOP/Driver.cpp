#include <iostream>
#include "Vect.h"

using namespace std;

int main(){
    Vect *vect = new Vect(10);
    for (int i = 0; i < 10; i++)
    {
        vect->setDataAtIndex(i,i);
    }
    
    cout << vect->getDataAtIndex(1)<<endl;

    Vect *vect1 = new Vect(*vect);

    cout << vect1->getDataAtIndex(9)<<endl;
    cout << vect->getDataAtIndex(9)<<endl;

}