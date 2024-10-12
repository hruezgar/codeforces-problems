#include <iostream>
using namespace std;
int main(){
	int fban, mon, noban;
	cin >> fban >> mon >> noban;
	int coban = 0;
	for (int i = 1; i <= noban; i++){
		coban = coban + (fban * i);
	}
	if(coban > mon){
		cout << coban - mon;
	} else {
		cout << 0;
	}
	

}