//File: vars.cc
#include <iostream>
using namespace std;

int g = 1000;

void p(int i) {
    int j = 30;
    cout << "i in p is : " << i << endl;
    cout << "j in p is : " << j << "\n\n\n" << endl;
}

void f(int i) {
    int j = 20;
    static int k = 100;
    cout << "i in f is : " << i << endl;
    cout << "j in f is : " << j << endl;
    cout << "k in f is : " << k << endl;
    cout << "g in f is : " << g << "\n\n" << endl;
    i++;
    j++;
    k++;
    g++;
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