#include <iostream>

using namespace std;

int main() {
    enum eNum { hung = 100, soc = 200, nhim = 300};
    
    eNum myEnum = hung;

   switch (myEnum)
   {
   case 100:
       /* code */
       cout << "Enum demo" << endl;
       break;
   
   default:
       break;
   }

}