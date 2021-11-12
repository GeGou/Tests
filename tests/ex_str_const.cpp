#include <iostream>
using namespace std;

int main() {
    char a[] = "string";
    cout << a << endl;
    a[0] = 'd';
    cout << a << endl;
    char* sa = "litteral string";   // const for no warnings
    cout << sa << endl;
    sa++;
    cout << sa << endl;
    // sa[0] = ’d’; // Causes segmentation fault
    return 0;
}