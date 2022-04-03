#include <iostream>
using namespace std;

int main(){
	int nums;
	cin >> nums;
	int cur_police;
	int sum_polices = 0;
	int untreated = 0;
	for(int i = 1; i <= nums; i++){
		cin >> cur_police;
		if(cur_police != -1){
			sum_polices += cur_police;
		} else {
			if(sum_polices > 0){
				sum_polices--;
			} else {
				untreated++;
			}
		}
	}
	cout << untreated;

}