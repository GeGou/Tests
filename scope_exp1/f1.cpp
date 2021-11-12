//File: f1.cpp
#include <iostream>
using namespace std;

int x = 10000;

void f() {
    int x;
    x = 1;
    cout << ::x << endl;
    {
        int x;
        x = 2;
        cout << x << endl; // prints inner x = 2
    }
    cout << x << endl; // prints outer x = 1
}