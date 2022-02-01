#include<iostream>
using namespace std;

class A{
    int data1;
    int& data2;
public:
    A(int d1, int& d2):data1(d1), data2(d2) {
        cout << "An A just constructed" << endl;}
    ~A(){cout << "An A to be destructed with: " << data1 << " and " << data2 << endl;}
    A& operator=(const A& a) { 
        cout<< "I am performing an A assignment" << endl;
        data1 = a.data1; data2 = a.data2;
        return *this;
    }
    void inc() { data1++; data2++; }
    void print() {cout << data1 << " " << data2 << endl;} 
};

class B{
    int data1;
    int* data2;
    A& data3;
public:
    B(int d1, int* pd2, A& a):data1(d1), data2(pd2), data3(a) {
        cout << "A B just constructed" << endl;}
    ~B() {
        cout << "A B to be destructed with: " << data1 << " and " << *data2 << " and " << endl;
        data3.print(); 
    }
    B& operator=(const B& b) { 
        cout<< "I am performing a B assignment" << endl;
        data1 = b.data1; data2 = b.data2; data3 = b.data3;
        return *this;
    }
    void inc() { data1++; ++(*data2); data3.inc(); } 
};

int main(){
    int i1 = 10; 
    int i2 = 20;
    A a1(i1, i1); 
    A a2(i2, i2);
    B b1(i1, &i2, a1); 
    B b2(i2, &i1, a2); 
    B b3(b1);
    a1.inc(); 
    a2.inc();
    b1.inc(); 
    b2.inc(); 
    b3.inc();
    cout<< "i1=" << i1 << " " << "i2=" << i2 << endl;

    b2 = b3; 
    b3.inc();
    cout<< "i1=" << i1 << " " << "i2=" << i2 << endl;
}