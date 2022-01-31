#include <iostream>
#include <string>
using namespace std;

int main(){
	int num;
	string output = "EASY";
	cin >> num;
	int current_opinion;
	for(int i = 0; i < num; i++){
		cin >> current_opinion;
		if(current_opinion == 1)
			output = "HARD";
	}
	cout << output;
}