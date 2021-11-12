#include <iostream>
using namespace std;

int main() {
    int p[] = {10,20,30,40};
    int *q = p;
    int x;
    
    //////////////////////////////////////////////////////////////////////
    x = *q; // x equals to the value of the integer that q points to (x=10)
    cout << x << endl; // number 10 is printed
    
    //////////////////////////////////////////////////////////////////////
    x = *q++; // x equals to the value of the integer that
    // q points to (x=10), then q points to the next integer, i.e. p[1]
    cout << x << endl; // number 10 is printed
    
    //////////////////////////////////////////////////////////////////////
    x = *(q++); // x equals to the value of the integer that
    // q points to (x=20), then q points to the next integer, i.e. p[2]
    cout << x << endl; //number 20 is printed
    
    //////////////////////////////////////////////////////////////////////
    x = (*q)++; // x equals to the value of the integer that q points to (x=30),
    // then the value of p[2] is incremented by 1.No change for q
    cout << x << endl; // number 30 is printed
    
    //////////////////////////////////////////////////////////////////////
    x = *q; // x equals to the value of the integer that q points to (x=31)
    cout << x << endl; // number 31 is printed
    
    //////////////////////////////////////////////////////////////////////
    x = *++q; // first increment q to point to the next integer,
    // i.e. p[3], and then assign to x its value (x=40)
    cout << x << endl; // number 40 is printed
    
    ////////////////////////////////////////////////////////////////////// 
    x = ++*q; // first increment the value of the integer that
    // q points to and then assign this value to x (x=41)
    cout << x << endl; // number 41 is printed
    return 0;
}