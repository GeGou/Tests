// File: f2.cpp
#include <iostream>
using namespace std;

int x = 20000;

void f() {
    int x = 2;
    cout << x << endl; // prints local x
    cout << ::x << endl; // prints global x
}