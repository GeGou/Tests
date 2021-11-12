#include <iostream>
using namespace std;

int main() {
    const int a = 10;
    // a = 1000; // error
    // a++; // error
    const int arr[] = {1,2,3};
    // arr[1] = 2000; // error
    ///////////////////////////////////////////////////////////////////
    char abc[] = "abcdef";
    const char* pc = abc; // pointer to constant
    // pc[3] = 'a'; // error
    abc[3] = 'a';
    pc = "efghijkl"; // ok
    char *const cp = abc; // constant pointer
    cp[3] = 'a'; // ok
    // cp = "efgh"; // error
    const char *const cpc = abc; // constant pointer to constant
    // cpc[3] = 'a'; // error
    // cpc = "efgh"; // error
    return 0;
}