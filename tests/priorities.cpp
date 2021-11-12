// Inspired by an example in Eckel’s book
#include <iostream>
using namespace std;

int main() {
    int a,b;
    b=1;
    cout << ((a = --b) ? b : (b = -99 ))
    << '\n' << " a is " << a << '\n' <<
    " b is " << b << endl;
    
    b=1;
    cout << (a = --b ? b : (b = -99 ))
    << '\n' << " a is " << a << '\n' <<
    " b is " << b << endl;
    return 0;
}