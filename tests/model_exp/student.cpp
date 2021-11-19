//File: student.cpp
#include <cstring>
#include <iostream>
#include "student.h"
using namespace std;

void Student::set_name(const char* nam) {
    name = new char[strlen(nam)+1];
    strcpy(name,nam);
}

void Student::set_no(int n) {
    no = n;
}

void Student::set_year_of_studies(int y) {
    year_of_studies = y;
}

char* Student::get_name()const {
    return name;
}

int Student::get_no()const {
    return no;
}

int Student::get_year_of_studies()const {
    return year_of_studies;
}