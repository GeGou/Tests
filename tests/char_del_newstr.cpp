#include <iostream>
using namespace std;

int length(const char* str) {
    int length = 0;
    for(int i = 0; str[i] != '\0'; i++)
        length = i;
    return length;
}

char* remove(const char*,char);

int main() {
    char* string1 = "abagaadagaga";
    cout << remove(string1, 'a') <<endl;
    cout << remove(string1, 'g') <<endl;
    return 0;
}

char* remove(const char* str, char ch) {
    int l = length(str);
    char* res = new char[l+1];
    int j = 0;
    for( int i = 0; i <= l; i++ )
        if ( str[i] != ch ) {
            res[j] = str[i] ;
            j++;
        }
    res[j] = '\0';
    return res;
}