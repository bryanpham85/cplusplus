#include "GameEntry.h"

using namespace std;

GameEntry::GameEntry(const string & n="", int s=0){
    name = n;
    score = s;
}

string GameEntry::getName() const { return name;}

int GameEntry::getScore() const { return score;}