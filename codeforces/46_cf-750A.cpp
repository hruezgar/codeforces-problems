#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int available_min = 240 - k;
	int cur_p_min = 5;
	int i = 1;
	int counter = 0;
	while((available_min - cur_p_min) >= 0){
		counter++;
		available_min -= cur_p_min; 
		i++;
		cur_p_min = 5 * i;
	}
	if(counter > n){
		counter = n;
	}
	cout << counter;

}