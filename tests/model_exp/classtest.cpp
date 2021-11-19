//File: classtest.cpp
#include <iostream>
#include "student.h"
using namespace std;

int main() {
    Student s;
    int year, no;
    // s.no = 13;
    s.set_name("First Last");
    s.set_no(100);
    s.set_year_of_studies(1);
    s.set_name("NFirst Last");
    year = s.get_year_of_studies();
    no = s.get_no();
    cout << "\nYear of studies is " << year << " for student with no " << no << " and name " << s.get_name() << endl ;
    return 0;
}