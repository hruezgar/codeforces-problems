#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	int current_num;
	int counter = 0;
	int min, max;
	for(int i = 1; i <= num; i++){
		cin >> current_num;
		if(i == 1){
			min = current_num;
			max = current_num;
		}
		if(current_num > max){
			max = current_num;
			counter++;
		}
		if(current_num < min){
			min = current_num;
			counter++;
		}
	}
	cout << counter;

}