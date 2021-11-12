#include <iostream>
using namespace std;

// the function void print(int,int)
// uses default value into its second argument
void print(int i, int base = 10) { // if not default value,
// interchange with comment line
//void print(int i, int base)
    switch(base) {
        case (10) : cout << "i in dec = " << i << endl; break;
        case (16) : cout << hex << "i in hex = " << i << endl; break;
        case (8) : cout << oct << "i in oct = " << i << endl; break;
        default : cout << "No proper base " << endl;
    }
}

int main() {
    int i = 16;
    print(i); // if not default value,
    // interchange with comment line
    // print(i,10);
    print(i,16);
    print(i,8);
    return 0;
}

/////////////////////////////////////////////////////////
// h parapanw sunarthsh antika8ista authn
// #include <iostream>
// using namespace std;
// int main()
// {
// int i = 16;
// cout << "i in dec = " << i << endl;
// cout << hex << "i in hex = " << i << endl;
// cout << oct << "i in oct = " << i << endl;
// return 0;
// }