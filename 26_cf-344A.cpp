#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	int curmag;
	int lastmag;
	int spaces = 0;
	cin >> lastmag;
	for(int i = 0; i < num-1; i++){
		cin >> curmag;
		if(lastmag != curmag){
			spaces++;
		}
		lastmag = curmag;
	}
	cout << spaces + 1;
}