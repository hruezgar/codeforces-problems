#include <iostream>
using namespace std;

int main(){
	int arr_len;
	cin >> arr_len;
	int biggest_num = 0;
	int smallest_num = 101;
	int sm_index;
	int bg_index;
	int cur_num;
	
	for(int i = 0; i < arr_len; i++){
		cin >> cur_num;
		if(cur_num > biggest_num){
			biggest_num = cur_num;
			bg_index = i;
		}
		if(cur_num <= smallest_num){
			smallest_num = cur_num;
			sm_index = i;
		}
	}
	int result;
	if(sm_index < bg_index){
		result = (arr_len - sm_index - 1) + bg_index - 1;
	} else {
		result = (arr_len - sm_index - 1) + bg_index;
	}
	cout << result;

}