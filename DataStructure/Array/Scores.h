#include "GameEntry.h"

using namespace std;

class Scores {
    public:
        Scores(int maxEnt = 0);
        ~Scores();
        void add(const GameEntry& e);
        GameEntry remove(int i) throw();
    private:
        int maxEntries;
        int numEntries;
        GameEntry *entries;
};