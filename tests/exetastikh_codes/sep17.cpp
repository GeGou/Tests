#include<iostream>
using namespace std;

class Block{ 
    int data;
public:
    Block(int datav = 0) : data(datav) { 
        cout << "Constructing a Block with " << datav << endl; }
    ~Block(){ cout << "Destructing a Block with: " << data << endl; }
    void double_it() { data = data * 2 ; }
    void print() { cout << data << endl; } };

class B{ 
    Block data1; 
    Block* data2; 
    Block* data3;
public:
    B() : data2(NULL),data3(NULL) { 
        cout << "Constructing a B" << endl; }
    B(int value1, Block* value2) : data1(value1) { 
        cout << "Constructing a B with given values " << endl;
        data2 = new Block(value1); data3 = value2; }
    ~B(){ 
        cout << "Destructing a B " << endl;
        if (data2 == NULL) cout << "with NULL data2" << endl;
            else { cout << "with data2: " << endl; delete data2; }
        if (data3 == NULL) cout << "with NULL data3" << endl;
            else{ cout << "with data3: " << endl; data3->print(); 
         }
    }
    void double_it(){
        data1.double_it();
        data2->double_it(); 
        data3->double_it();}
    void double_data1(){ 
        data1.double_it(); }
    void double_data2(){ 
        data2->double_it(); }
    void double_data3(){ 
        data3->double_it(); } 
};

int main(){ 
    Block block(20); 
    B b(10,&block);
    block.double_it(); 
    b.double_it(); 
    b.double_data1();
    b.double_data2(); 
    b.double_data3(); 
    block.double_it(); 
}