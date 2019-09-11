class Vect {
    public:
        Vect(int n);
        Vect(const Vect &vect);
        ~Vect();
        int getDataAtIndex(int i);
        void setDataAtIndex(int value, int i);
    private:
        int* data;
        int size;
};