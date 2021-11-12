// File: f2.cpp
int x = 10000;

int f() {
    static int x = ::x;
    return x++;
}