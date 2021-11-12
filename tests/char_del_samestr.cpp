#include <iostream>
using namespace std;

void remove(char*,char);

int main() {
    char string1[] = "abagaadagaga";
    char string2[] = "abagaadagaga";
    char string3[] = "ccabbbb";
    remove(string1, 'a');
    cout << string1 <<endl;
    remove(string2, 'g');
    cout << string2 <<endl;
    remove(string3, 'a');
    cout << string3 <<endl;
    return 0;
}

void remove(char* str, char ch) {
    int i=0, j=0;
    while (str[j] != '\0') {
        while (str[j] != ch && str[j] != '\0')
        str[i++] = str[j++];
        while (str[j] == ch)
        j++;
    }
    str[i] = '\0';
}