#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("This ");
    string s2("That ");

    for (int i = 0; i < s1.size() && i < s2.size(); i++)
    {
        if (s1[i] == s2[i])
            cout << s1[i] << " " << i << endl;
        else
        {
            break;
        }
    }

    if (s1 != s2)
    {
        cout << "String aren't the same"
             << " ";
    }
}