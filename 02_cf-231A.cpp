#include <iostream>
using namespace std;

int main(){
	int pnum;
	cin >> pnum;
	int scounter = 0;
	bool a;
	bool b;
	bool c;
	for(int i = 0; i < pnum; i++){
		cin >> a >> b >> c;
		if (a == 1 && b == 1){
			scounter++;
		} else if (a == 1 && c == 1){
			scounter++;
		} else if (b == 1 && c == 1){
			scounter++;
		}
	}
	cout << scounter;


}