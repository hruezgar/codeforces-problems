#include <iostream>
using namespace std;
int main(){
	int numos;
	cin >> numos;
	int out;
	int in;
	int cur = 0;
	int max = 0;
	for (int i = 0; i < numos; i++){
		cin >> out >> in;
		cur -= out;
		cur += in;
		if (cur > max){
			max = cur;
		}
	}
	cout << max;

}