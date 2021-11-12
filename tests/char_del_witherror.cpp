#include <iostream>
using namespace std;

int length(const char* str) {
    int length = 0;
    for(int i = 0; str[i] != '\0'; i++)
        length = i;
    return length;
}

int main() {
    char* string1 = "abagaadagaga";
    cout << remove(string1, 'a') <<endl;
    cout << remove(string1, 'g') <<endl;
    return 0;
}

char* remove(const char* str, char ch) {
    int l = length(str);
    char res[l+1];
    int j = 0;
    for( int i =0; i <= l; i++ )
        if ( str[i] != ch ) {
            res[j] = str[i] ;
            j++;
        }
    res[j] = '\0';
    return res; //error: when returning from remove, res out of scope
    //and its space is "discarded" from the stack
}