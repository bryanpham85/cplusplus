#include "Scores.h"

using namespace std;

Scores::Scores(int maxEnt) {
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}

Scores::~Scores(){
    delete[] entries;
}

void Scores::add(const GameEntry& e){
    //if the array already full, the most right item will be pushed out (smallest one)
    int eScore = e.getScore(); 
    
    //if it is smaller than smallest in array, it is ignored
    if(numEntries >= maxEntries){
        if(eScore < entries[maxEntries-1].getScore())
            return;
    }
    else
        numEntries++;
    int i = maxEntries - 2;
    while (i>=0 && eScore > entries[i].getScore())
    {
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;
}

GameEntry Scores::remove(int i) throw(){
    if(i<0 || i>=numEntries)
        throw "Invalid Index";
    GameEntry e = entries[i];
    for(int j=i+1; j<numEntries ; j++){
        entries[j-1] = entries[j];
    }
    numEntries--;
    return e;
}