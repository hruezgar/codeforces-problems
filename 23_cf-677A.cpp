#include <iostream>
using namespace std;

int main(){
	int fnum; // num of friends
	int height;
	int width_sum;
	cin >> fnum >> height;
	int curh; //height of the current student
	for(int i = 0; i < fnum; i++){
		cin >> curh;
		if(curh <= height){
			width_sum++;
		} else {
			width_sum += 2;
		}
	}
	cout << width_sum;
}