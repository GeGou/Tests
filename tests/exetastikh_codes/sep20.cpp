#include<iostream>
using namespace std;

class A{ 
    int data;
public:
    A(): data(10) { cout << "A new A has been constructed" << endl; }
    virtual ~A() { cout << " An A will be destructed with data: " << data << endl; }
    virtual void f1() { cout << "A::f1() is executing " << endl; data++; }
    void f2() { cout << "A::f2() is executing " << endl; f1(); } 
};

class B: public A{ 
    int data;
public:
    B(): data(100) { cout << "A new B has been constructed" << endl; }
    ~B() { cout << " A B will be destructed with data: " << data << endl; }
    void f1() { cout << "B::f1() is executing " << endl; data++; }
    virtual void f2() { cout << "B::f2() is executing " << endl; f1(); } 
};

class C: public B{ 
    int data;
public:
    C(): data(1000) { cout << "A new C has been constructed" << endl; }
    ~C() { cout << " A C will be destructed with data: " << data << endl; }
    void f1() { cout << "C::f1() is executing " << endl; data++; }
    void f2() { cout << "C::f2() is executing " << endl; f1(); } 
};

int main(){
    A* pa = new A(); pa->f1(); pa->f2(); delete pa;
    pa = new B(); pa->f1(); pa->f2(); delete pa;
    pa = new C(); pa->f1(); pa->f2(); delete pa; 
}