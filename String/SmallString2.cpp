#include <string>
#include <iostream>
using namespace std;

int main() {
    string s1("what is the sound of s1n which is to short in order to do something with a string");
    string s2("anything to do is worth overdoing");
    string s3("I saw Elvis in a UFO I'm not really waht going on");

    //String manipulation
    string s4(s1, 0,8);
    string s5(s2, 15, 6);
    string s6(s3, 6, 15);
    string quoteMe = s4 + "that" +
    // substr() copies 10 chars at element 20
    s1.substr(20, 10) + s5 +
    // substr() copies up to either 100 char
    // or eos starting at element 5
    "with" + s3.substr(5, 100) +
    // OK to copy a single char this way
    s1.substr(37, 1);
    cout << quoteMe << endl;

    return 0;
}