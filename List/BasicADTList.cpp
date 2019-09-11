#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lstObject;
    cout << "Enter 10 numbers" << flush;
    int x;
    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        lstObject.insert(x, lstObject.size());
    }
}