// File: f1.cpp
int x = 10000;

int f() {
    int x = ::x;
    return x++;
}