#include <iostream>
#include <string>
using namespace std;
int main(){
	string input;
	cin >> input;
	int counter = 0;
	for (int i = 0; i < input.length(); i++){
		if (input[i] == '4' || input[i] == '7'){
			counter++;
		}
	}
	if (counter == 4 || counter == 7){
		cout << "YES";
	} else {
		cout << "NO";
	}
}