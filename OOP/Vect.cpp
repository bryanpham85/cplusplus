#include "Vect.h"
#include <iostream>

using namespace std;

Vect::Vect(int n){
    size = n;
    data = new int[n];
}

Vect::Vect(const Vect& vect){
    size = vect.size;
    data = new int[size];
    for(int i=0; i<size; i++){
        data[i] = vect.data[i];
        vect.data[i]++;
    }
}

Vect::~Vect(){
    delete []data;
}

int Vect::getDataAtIndex(int i){
    return ((i>=0 && i< this->size)?this->data[i]:-1);
}

void Vect::setDataAtIndex(int value, int i){
    if(i>=0 && i<this->size)
        this->data[i] = value;
}
