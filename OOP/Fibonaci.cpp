#include <iostream>

using namespace std;

class Fibonaci
{
public:
    bool isFibonaciLoop()
    {
        /*
            Fibonaci Series
            By definition: f(1)=1; f(2)=1; f(3)=2;f(4)=3
            f(n) = f(n-1) + f(n-2)
                */

        if (this->value == 1)
            return true;

        int n_minus_1_Fibonaci = 1; //start with f(0)=1
        int n_minus_2_Fibonaci = 1; //start with f(1)=0
        int temp;
        int currentFibonaci;

        for (int i = 1; i < this->value;)
        {
            currentFibonaci = n_minus_1_Fibonaci + n_minus_2_Fibonaci;
            //check the revelant between current candidate number for Fibonachi with value
            if (currentFibonaci == this->value)
                return true;
            else
            {
                temp = n_minus_1_Fibonaci;
                n_minus_1_Fibonaci = currentFibonaci;
                n_minus_2_Fibonaci = temp;
                i = currentFibonaci;
            }
        }
        return false;
    }

    bool isFibonaciRecursive()
    {
        if(this->value == 1)
            return true;
        if (this->getClosestFibonaciWithValue(1, 1, this->value) == this->value)
            return true;
        else
        {
            return false;
        }
    }

    int getClosestFibonaciWithValue(int n_1, int n_2, int checkingNumber)
    {
        int currentFibo = n_1 + n_2;
        if (currentFibo > checkingNumber)
            return -1;
        if (currentFibo == checkingNumber)
            return currentFibo;
        return getClosestFibonaciWithValue(currentFibo, n_1, checkingNumber);
    }

    void setValue(int n)
    {
        this->value = n;
    }

    int getValue()
    {
        return this->value;
    }

private:
    int value;
};

int main()
{
    int checkingNumber = 0;
    string command = "";
    while (true)
    {
        cout << "Input the number to check " << endl;
        cin >> checkingNumber;

        Fibonaci *fibo = new Fibonaci();
        fibo->setValue(checkingNumber);
        //checking by loop
        if (fibo->isFibonaciLoop())
            cout << "the number: " << checkingNumber << " is a Fibonaci Number, checking by LOOP" << endl;
        else
        {
            cout << "the number: " << checkingNumber << " is NOT a Fibonaci Number, , checking by LOOP" << endl;
        }

        //checking by recursive
        if (fibo->isFibonaciRecursive())
            cout << "the number: " << checkingNumber << " is a Fibonaci Number, checking by Recursive" << endl;
        else
        {
            cout << "the number: " << checkingNumber << " is NOT a Fibonaci Number, , checking by Recursive" << endl;
        }
        cout << "Continute? y/n " << endl;
        cin >> command;
        if (command != "y")
            break;
    }

    return 1;
}
