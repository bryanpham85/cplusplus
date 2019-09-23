#include <iostream>

using namespace std;

class Progression {
    public:
        Progression(long f=0)
        :first(f), cur(f) {}
        virtual ~Progression(){};
        void printProgression(int n);
    protected:
        virtual long firstValue();
        virtual long nextValue();
    protected:
        long first;
        long cur;
};

void Progression::printProgression(int n){
    cout<< firstValue();
    for(int i=0; i<=n; i++)
        cout<< ' ' << nextValue() << endl;
}

long Progression::firstValue(){
    cur = first;
    return cur;
}

long Progression::nextValue(){
    return ++cur;
}