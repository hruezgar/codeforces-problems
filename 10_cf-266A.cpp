#include <iostream>
#include <string>
using namespace std;
int main(){
	int num;
	string text;
	cin >> num >> text;
	int len = text.length();
	int counter = 0;
	for (int i = 0; i < len - 1; i++){
		if(text[i] == text[i + 1]){
			counter++;
		}
	}
	cout << counter;

}