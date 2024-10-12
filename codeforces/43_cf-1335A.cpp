#include <iostream>
using namespace std;

int main(){
	int cases;
	cin >> cases;
	int cur_num;

	for (int i = 0; i < cases; i++){
		cin >> cur_num;
		if (cur_num % 2 == 0){
			cout << (cur_num - 2) / 2 << "\n";
		} else {
			cout << (cur_num - 1) / 2 << "\n";
		}

	}

}