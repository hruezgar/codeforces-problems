#include <iostream>
using namespace std;

int main(){
	int cases;
	cin >> cases;
	int a, b, counter;
	int result_arr[cases];

	for(int i = 0; i < cases; i++){
		counter = 0;
		cin >> a >> b;
		if(a % b == 0){
			result_arr[i] = 0;
		} else {
			result_arr[i] = b - (a % b);
		}

	}
	for(int i = 0; i < cases; i++){
		cout << result_arr[i] << "\n";
	}
}