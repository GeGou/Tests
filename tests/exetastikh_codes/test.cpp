#include <iostream>

using namespace std;

class Howmany {
    static int objectCount;
    public:
        Howmany() {
            objectCount++;
        }
        
        static void print(const string& msg = "") {
            if (msg.size() != 0) cout << msg << endl;
            cout << "objectCount = " << objectCount << endl;
        }
        
        Howmany(const Howmany& cc) {
            cout << "Howmany copy constructor called!" << endl;
        }
        
        ~Howmany() {
            objectCount--;
            print("~Howmany destructor called!");
        }
};

int Howmany::objectCount = 0;

Howmany f (Howmany x) {
    x.print("x arg inside f()");
    return x;
}

int main()
{
    Howmany h;
    Howmany::print("after construction of h");
        
    Howmany h2 = f(h);
    Howmany::print("after call to f()");
    return 0;
}