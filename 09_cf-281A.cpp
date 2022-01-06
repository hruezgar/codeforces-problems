#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
	string input;
	cin >> input;
	cout << (char)toupper(input[0]);
	for (int i = 1; i < input.length(); i++){
		cout << input[i];
	}


}