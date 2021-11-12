// File: f4.cpp
#include<iostream>
using namespace std;

int x = 10000;

int f() {
    static int x = ::x;
    {
        static int x = 8; 
        cout << x++ << endl; 
    }
    cout << x++ << endl;
    return x;
}