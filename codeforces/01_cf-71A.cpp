#include <iostream>
#include <string>
#include <typeinfo>
#include <ctype.h>
using namespace std;



int main(){
    int n;

    cin >> n;
    string wordlist[n];

    for (int i = 0; i < n; i++) {
        cin >> wordlist[i];
    }
    int len;
    string curword;

    for (int i = 0; i < n; i++) {
        len = wordlist[i].length();
        curword = wordlist[i];
        if (len > 10) {
            string short_output = curword[0] + to_string(len - 2) + curword[len - 1];
            cout << short_output;

        } else {
            cout << curword;
        }
        cout << "\n";
    }
} // main