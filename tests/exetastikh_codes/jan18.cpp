#include<iostream>
using namespace std;

class A{ 
    int data;
public:
    A(int i=10):data(i) {
        cout << "An A just created" << endl;}
    A(const A& a):data(a.data) {
        cout << "An A just created with CP" << endl;}
    ~A(){ 
        cout << "An A to be destroyed with data" << data << endl;}
    void increase(int i) {
        data*=i;}
    };

class A1 {
    A data1; 
    A& data2;
public:
    A1(A& a):data1(a),data2(a) {
        cout << "An A1 just created" << endl;}
    ~A1(){cout << "An A1 to be destroyed" << endl;}
    void process() {
        data1.increase(2); 
        data2.increase(2);} 
    };

class A2{
    A data1; 
    A* data2;
public:
    A2(const A& a):data1(a) {
        data2 = new A(a); 
        cout << "An A2 just created" << endl;}
    A2(const A2& a2):data1(a2.data1) {
        data2 = new A(*(a2.data2));
        cout << "An A2 just created with CP" << endl;}
    ~A2(){cout << "An A2 to be destroyed" << endl; 
        delete data2;}
    void process() {
        data1.increase(10); 
        data2->increase(10);} 
    };

class B{
    A1& data1; 
    A2 data2;
public:
    B(A1& a1, A2& a2): data1(a1),data2(a2) {
        cout << "A B just created" << endl;}
    ~B(){
        cout << "A B to be destroyed" << endl;}
    void process(){
        data1.process(); 
        data2.process();}
    };

int main(){ 
    A a; 
    A1 a1(a); 
    A2 a2(a);
    B b1(a1,a2); 
    B b2(b1);
    b1.process(); 
    b2.process(); 
    a1.process(); 
    a2.process();
}