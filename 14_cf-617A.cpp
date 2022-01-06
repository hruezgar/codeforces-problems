#include <iostream>
using namespace std;
int main(){
	int input;
	cin >> input;
	if (input % 5 == 0){
		cout << input/5;
	} else {
		cout << (input - (input % 5))/5 + 1;
	}



}