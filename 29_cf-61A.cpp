#include <iostream>
#include <string>
using namespace std;

int main(){ 
	string num1, num2;
	cin >> num1 >> num2;
	string output = num1; 
	for(int i = 0; i < num1.length(); i++){
		if(num1[i] != num2[i]){
			output[i] = '1';
		} else {
			output[i] = '0';
		}
	}
	cout << output;
}