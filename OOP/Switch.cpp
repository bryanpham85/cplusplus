#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;

    int a = 0;

    switch(k){
        case 1:
            a++;
        case 2:
            a++;
        case 3:
            a++;
        case 10:
            a++;
            break;
    }

    cout << a << endl;
    return 1;
}