#include <iostream>
using namespace std;

void p() {
    int k = 300;
    int* kk = &k;
    cout << "kk points to :" << *kk << "\n\n\n" << endl;
    int* j = new int(30);
    cout << "j in p points to : " << *j << "\n\n\n" << endl;
    delete j; // deallocate storage where j pointed to;
    j = kk; // j is NOT out of scope, now points where kk points to
    cout << "kk points to :" << *kk << "\n\n\n" << endl;
    cout << "j after deletion points to :" << *j << "\n\n\n" << endl;
}

int main() {
    p();
    p();
    return 0;
}