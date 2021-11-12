#include <iostream>
using namespace std;

int main() {
    int i,j;
    i=5;
    j=i;
    cout << j << '\n' << i << '\n';
    cout << & j << '\n' << & i << '\n';
    int ii;
    cout << & ii << '\n';
    ii = 3;
    int & jj = ii;
    cout << jj << '\n' << ii << '\n';
    cout << & jj << '\n' << & ii << '\n';
    int* p;
    int* q;
    p = & ii;
    q = & jj;
    cout << p << '\n' << q << '\n';
    cout << &p << '\n' << &q << '\n';
    return 0;
}