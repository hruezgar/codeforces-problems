#include <iostream>
using namespace std;


int main(){
	long n, l, r;
	cin >> n >> l >> r;
	long counter = 0;
	counter += n - l;
	for(long i = n; i <= r; i++){
		long corr = i ^ n;
		if(corr < n){
			counter++;
		}
	}
	cout << counter;
	
}