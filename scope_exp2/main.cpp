// File: main.cpp
#include <iostream>
using namespace std;

extern int x;
int f();

int main() {
    cout << " x = " << x << endl;
    cout << "1st output of f() " << f() << endl;
    cout << "2nd output of f() " << f() << endl;
    return 0;
}