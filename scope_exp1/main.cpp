//File: main.cpp
#include <iostream>
using namespace std;

extern int x;
void f();

int main() {
    cout << x << endl;
    f();
    return 0;
}