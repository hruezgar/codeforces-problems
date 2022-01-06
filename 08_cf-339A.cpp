#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	cin >> input;
	int len = input.length();
	int arrlen = (len + 1)/2;
	int nums[arrlen];
	int j = 0;
	int charak;
	for(int i = 0; i < len; i += 2){
		charak = input[i];
		nums[j] = (charak - '0');
		j++;
	}
	int temp;
	for (int i = 0; i < arrlen; i++){
		for (int i = 0; i < (arrlen - 1); i++){
			if(nums[i] > nums[i + 1]){
				temp = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = temp;
			}
			
		}

	}

	for (int i = 0; i < arrlen; i++){
		if(i != arrlen - 1){
			cout << nums[i] << "+";
		} else {
			cout << nums[i];
		}
	} 
    


}