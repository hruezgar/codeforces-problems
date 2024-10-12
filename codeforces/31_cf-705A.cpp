#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	if(num == 1){
		cout << "I hate it";
	} else {
		for(int i = 0; i < num - 1; i++){
			if(i % 2 == 0){
				cout << "I hate that ";
			} else {
				cout << "I love that ";
			}
		}
		if(num % 2 == 0){
			cout << "I love it";
		} else {
			cout << "I hate it";
		}
	}
}