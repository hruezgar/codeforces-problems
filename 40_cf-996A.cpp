#include <iostream>
using namespace std;

int main(){
	int input;
	cin >> input;
	int score = 0;
	int pap_list[5] = {100, 20, 10, 5, 1};
	for (int i = 0; i <	 5; i++){
		score += input/pap_list[i];
		input = input%pap_list[i];
		if (input == 0){
			break;
		}

	}
	cout << score;



}