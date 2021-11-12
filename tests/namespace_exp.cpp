#include <iostream>
using namespace std;

int myInt = 100000;

namespace Example{
    const double PI = 3.14159;
    const double E = 2.71828;
    int myInt = 8; // Avoid this in the general case!
    void printValues();
}

int main() {
    cout << myInt << endl;
    cout << Example::E << endl;
    cout << "The namespace myInt: " << Example::myInt << endl ;
    Example::printValues();
    using namespace Example;
    cout << "The namespace E from main: " << E << endl ;
    cout << ::myInt << endl;
    return 0;
}

void Example::printValues() {
    cout << "Printing from printValues" << endl;
    cout << myInt << endl;
    cout << E << endl;
}