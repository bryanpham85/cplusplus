#include <iostream>
#include <math.h>

using namespace std;
using std::string;

enum GD{
    hung = 10,
    chau,
    soc = 11,
    nhim = 15,
    oanh
};

struct Room
{
    string id;
    enum GD gd[5];
    int condition;
};

int* returnAnArrayOfIn(){
    int val[] = {1,2,3,4};
    return val;
}

void increase(int a, int &b){
    a++; b++;
}

int main(){
    enum GD test;
    test = hung;
    cout << test << endl;

    test = chau;
    cout << test << endl;

    test = soc;
    cout << test << endl;

    test = oanh;
    cout << test << endl;

    Room room = {"B2908", {hung, chau, nhim, soc, oanh}, 10};
    cout << room.condition <<endl;
    cout << room.gd[0] <<endl;

    Room *r = new Room;

    r->condition = 30;
    r->gd[0] = soc;
    r->gd[1] = nhim;
    r->id = "B2-8-09";
    cout << r->condition << endl;

    delete r;
    r->id = "100";
    cout << r->id <<endl;

    int a = 100;

    cout << pow(a,2);

    int* val1 = returnAnArrayOfIn();
    cout << val1[0];

    int a1 = 0, b = 1;

    increase(a1,b);
    cout<<"a is " << a1 << "b is " << b;
}