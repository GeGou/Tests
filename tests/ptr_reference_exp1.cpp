#include <iostream>
using namespace std;

int main() {
    int i;
    int &j = i;
    i = 3;
    // int* p = &i; // interchange with the following line
    int* p = &j;
    cout << i << '\n' << j << '\n' << *p << endl ;
    cout << p << '\n' << &j << '\n' << &i << endl ;
    cout << &p << endl;
    return 0;
}