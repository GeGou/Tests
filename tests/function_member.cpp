#include <iostream>
using namespace std;

struct date {
    void set(int, int, int);
    void get(int&, int&, int&);
private :
    int day, month, year;
};

int main() {
    date today;
    int d,m,y;
    today.set(31,12,1999);
    // cout << today.month << endl ;
    // if the above is uncommented, an error occurs
    today.get(d,m,y);
    cout << "day " << d << ", month " << m << ", year " << y << endl ;
    return 0;
}

void date::set(int i, int j, int k) {
    day = i;
    month = j;
    year = k;
}

void date::get(int& i, int& j, int& k) {
    i = day;
    j = month;
    k = year;
}