// File: f3.cpp
#include <iostream>
using namespace std;

int x = 300000;

void f() {
    int y = x; // assigns global x
    int x = 2; // defines a new local x
    cout << x << endl ; // prints new x
    cout << y << endl ; // prints y which has the value of global x
}