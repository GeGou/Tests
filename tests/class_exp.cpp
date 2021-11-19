#include <iostream>
using namespace std;

class date {
public:
    void set(int, int, int);
    void get(int&, int&, int&) const;
private:
    int day, month, year;
};

date TODAY; // Global variable

int main() {
    date someday; // Local variable
    int d,m,y;
    someday.set(18,3,2005);
    someday.get(d,m,y);
    cout << "day " << d << ", month " << m << ", year " << y << endl ;
    date nextday; // Another instance
    nextday.set(19,3,2005);
    nextday.get(d,m,y);
    cout << "day " << d << ", month " << m << ", year " << y << endl ;

    /////////////////////////////////////////////////////////////////
    TODAY.set(19,11,2019);
    TODAY.get(d,m,y);
    cout << "day " << d << ", month " << m << ", year " << y << endl ;
    
    /////////////////////////////////////////////////////////////////
    date* psomeday = &someday; // Pointer to local date
    cout << "The size of a variable of type int " << sizeof(int) << endl;
    cout << "The size of a variable of type date " << sizeof(someday) << endl;
    cout << "The size of a variable of type pointer to date " << sizeof(psomeday) << endl;
    psomeday->get(d,m,y);
    cout << "day " << d << ", month " << m << ", year " << y << endl ;
    (*psomeday).get(d,m,y);
    cout << "day " << d << ", month " << m << ", year " << y << endl ;
    date* pbreakdate = new date(); // Ponter to date in heap (dynamic allocation)
    pbreakdate->set(23,12,2019);
    pbreakdate->get(d,m,y);
    cout << "day " << d << ", month " << m << ", year " << y << endl ;
    delete pbreakdate;
}

void date::set(int i, int j, int k) {
    day = i;
    month = j;
    year = k;
}

void date::get(int& i, int& j, int& k) const {
    i = day;
    j = month;
    k = year;
}