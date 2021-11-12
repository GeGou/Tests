// Similar to vars.cc but space allocated within the body of function p
#include <iostream>
using namespace std;

int g = 1000;

void p(int i) {
    int* j = new int(30); // now j points to heap
    cout << "i in p is : " << i << endl;
    cout << "j in p points to : " << *j << "\n\n\n" << endl;
    delete j;
}

void f(int i) {
    int j = 20;
    static int k = 100;
    cout << "i in f is : " << i << endl;
    cout << "j in f is : " << j << endl;
    cout << "k in f is : " << k << endl;
    cout << "g in f is : " << g << "\n\n" << endl;
    i++; j++; k++; g++;
    p(i);
}

int main() {
    int i = 5;
    cout << "i in main is :" << i << '\n' << endl;
    f(i);
    cout << "i in main is :" << i << '\n' << endl;
    f(i++);
    cout << "i in main is :" << i << '\n' << endl;
    f(++i);
    cout << "i in main is :" << i << '\n' << endl;
    cout << "g in main is :" << g << '\n' << endl;
    return 0;
    }