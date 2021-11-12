// με inline γλυτωνουμε απο τις παρενεργειες του define 
// με την εκτελεση καταλαβινουμε ποιες ειναι αυτες.
#include <iostream>
using namespace std;
#define MAX1(i,j) (((i)>(j))?(i):(j))

inline int max2(int i, int j) { 
    return ( i > j? i : j) ;
}

int main() {
    int m1, m2, i = 5, j = 10;
    m2 = max2(i++,j++) ;
    cout << "m2 = " << m2 << '\n';
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    m1 = MAX1(i++, j++);
    cout << "m1 = " << m1 << '\n';
    cout << "i = " << i << '\n';
    cout << "j = " << j << '\n';
    return 0;
}