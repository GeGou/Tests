// File: f3.cpp
static int x = 10000; // CAREFUL: x static to current file!

int f() {
    int x = ::x;
    return x++;
}