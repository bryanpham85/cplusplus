#include <iostream>

using namespace std;

class BaseClass {
    public:
        virtual void foo(){
            cout << "Base class " << endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        void foo() override{
            cout << "Dervie class" << endl;
        }
};

int main() {
    BaseClass *ptr;
    ptr = new DerivedClass();
    ptr->foo();
    return 1;
}