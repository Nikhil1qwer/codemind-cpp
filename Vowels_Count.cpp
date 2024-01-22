#include <iostream>
#include <cctype>

using namespace std;
int isvowel(char ch);

int main () {
    string str;
    getline (cin, str);
    
    int count = 0;
    for (int i = 0; str[i] != NULL; i++) {
        if (isvowel(str[i])) {
            count++;
        }
    }
    cout << count << endl;
}

int isvowel (char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}