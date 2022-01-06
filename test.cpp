#include <iostream>
using namespace std;

int ebob(int x, int y){
	if (y == 0){
		return x;
	} else {
		return ebob(y, x % y);
	}
}
int main(){
	cout << ebob(20, 16);
	
}