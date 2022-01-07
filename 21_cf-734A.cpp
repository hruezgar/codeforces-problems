#include <iostream>
#include <string>
using namespace std;
int main(){
	int num;
	string input;
	cin >> num >> input;
	int a,d = 0;
	for (int i = 0; i < num; i++){
		if(input[i] == 'A'){
			a++;
		} else {
			d++;
		}
	}
	if (a > d){
		cout << "Anton";
	} else if (a < d){
		cout << "Danik";
	} else {
		cout << "Friendship";
	}
}