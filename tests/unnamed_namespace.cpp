#include <iostream>
using namespace std;

namespace {
    const double PI = 3.14159;
    const double E = 2.71828;
    int myInt = 8;
    void printValues() {
        cout << "Printing from printValues" << endl;
        cout << myInt << endl;
        cout << E << endl;
    }
}

int main() {
    cout << myInt << endl;
    cout << E << endl;
    cout << "The namespace myInt: " << myInt << endl ;
    printValues();
    return 0;
}