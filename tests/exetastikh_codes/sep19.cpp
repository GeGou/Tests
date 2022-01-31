#include<iostream>
using namespace std;

class A{ 
    int data;
public:
    A(int d=10) : data(d) { cout << "An A just constructed" << endl;}
    A(const A& a) : data(a.data) {cout << "An A just constructed by CP"  << endl;}
    ~A(){cout << "An A to be destructed with: " << data << endl;}
    void inc() { data++;}
    int get() {return data;} 
};

class B{ 
    A data1; 
    A& data2; 
    A* data3;
public:
    B(const A& d1, A& d2, const A& d3) : data1(d1), data2(d2){
        cout << "here" << endl;
        data3 = new A(d3); 
        cout << "A B just constructed" << endl;}
    B(const B& b) : data1(b.data1), data2(b.data2){
        data3 = new A(*(b.data3)); 
        cout << "A B just constructed by CP " << endl;}
    ~B(){cout << "A B to be destructed with: " << data1.get()
        << " and " << data2.get() << " and " << data3->get() << endl;
        delete data3; 
    }
    B& operator=(const B& b) { 
        cout<< "I am performing a B assignment " << endl;
        if (this != &b){
            delete data3;
        data1 = b.data1; data2 = b.data2; data3 = new A(*(b.data3));}
        return *this;
    }
    void inc() {data1.inc(); data2.inc(); data3->inc();} 
};

void fun(B b1, B& b2, B* pb3){
    cout << "here0" << endl;
    b1.inc(); 
    cout << "here1" << endl;
    b2.inc(); 
    cout << "here2" << endl;
    pb3->inc();
    cout << "here3" << endl;
    b2 = *pb3; 
    cout << "here4" << endl;
    b1 = b2;
    cout << "here5" << endl;
    b1.inc(); 
    cout << "here6" << endl;
    b2.inc(); 
    cout << "here7" << endl;
    pb3->inc();
    cout << "here8" << endl;
}

int main(){ 
    A a1; 
    A a2(100);
    B b1(a1, a2, a1); 
    B b2(a2, a1, a2);
    fun(b1, b2, &b1); 
}