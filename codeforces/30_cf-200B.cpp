#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	int curnum;
	float sum = 0;
	for(int i = 0; i < num; i++){
		cin >> curnum;
		sum += curnum;
	}
	cout << sum / num;
}