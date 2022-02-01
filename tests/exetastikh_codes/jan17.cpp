#include<iostream>
using namespace std;

class A{ 
    int data;
public:
    A(int i=10):data(i) {
     cout << "An A was just constructed with " << i << endl; }
    ~A(){ cout << "An A will be destroyed with " << data << endl; }
    void inc() { data++; }
    int get() { return data; }
    void print() { cout << "The A data is: " << data << endl; } };

class B1 { A data;
public:
    B1(const A& a): data(a) { 
        cout << "A B1 was just constructed " << endl; }
    ~B1() { 
        cout << "A B1 will be destroyed with " << data.get() << endl; }
    B1 process() { data.inc(); return *this; }
    void print() { 
        cout << "The B1 data is: " << data.get() << endl ; } 
    };

class B2 { A& data;
public:
    B2(A& a): data(a) { 
        cout << "A B2 was just constructed " << endl; }
    ~B2() { 
        cout << "A B2 will be destroyed with " << data.get() << endl; }
    B2& operator=(const B2& b2) { 
        cout<< "I am performing a B2 assignment" << endl;
        data = b2.data; 
        return *this;}
    B2 process() { 
        data.inc(); 
        return *this; 
    }
    void print() { cout << "The B2 data is: " << data.get() << endl ; } };

class B3 { A* data;
public:
    B3(const A& a){
        data = new A(a);
    cout << "A B3 was just constructed " << endl;}
    B3(const B3& b3) {
        data = new A(*(b3.data));
        cout << "A B3 was just constructed by copying " << endl; }
    ~B3() { cout << "A B3 will be destroyed " << endl;
        delete data; }
    B3& operator=(const B3& b3) { 
        cout<< "I am performing a B3 assignment" << endl;
        delete data; 
        data = new A(*(b3.data)); 
        return *this; 
    }
    B3 process() { data->inc(); return *this; }
    void print() { cout << "The B3 data is: " << data->get() << endl ; } };

class C { 
    B1 data1; 
    B2 data2; 
    B3 data3;
public:
    C(const B1& b1, const B2& b2, const B3& b3) :
        data1(b1), data2(b2), data3(b3) { 
            cout << "A C was just constructed " << endl; }
    ~C() { cout << "A C will be destroyed! " << endl; }
    B1 process1() { return data1.process();}
    B2 process2() { return data2.process();}
    B3 process3() { return data3.process();} 
};

int main() { 
    A a; 
    B1 b1(a); 
    B2 b2(a); 
    B3 b3(a); 
    C c(b1,b2,b3);
    a.print(); 
    b1.print(); 
    b2.print(); 
    b3.print();
    b1 = c.process1(); 
    b2 = c.process2();
    c.process2(); 
    b3 = c.process3();
    cout << "////////////////////////////" << endl;
    a.print(); 
    b1.print(); 
    b2.print(); 
    b3.print(); 
}