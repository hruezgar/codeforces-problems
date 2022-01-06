#include <iostream>
#include <string>
using namespace std;
int main(){
    string input;
	cin >> input;
    int ascii;
    int small = 0;
    int big = 0;

    for (int i = 0; i < input.length(); i++) {
        ascii = input[i];
        if (ascii > 96) {
            small++;
        } else {
            big++;
        }
    }

    if (small >= big) {
        for (int i = 0; i < input.length(); i++) {
            input[i] = tolower(input[i]);
        }
    } else {
        for (int i = 0; i < input.length(); i++) {
            input[i] = toupper(input[i]);
        }
    }

    cout << input;

} // main