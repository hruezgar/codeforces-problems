#include <iostream>
#include <string>
using namespace std;
int main(){
	string input, reverse, itoreverse;
	cin >> input >> reverse;
	itoreverse = input;
	int count = input.length() - 1;
	for (int i = 0; i < input.length(); i++){
		itoreverse[i] = input[count];
		count--;
	}
	if (itoreverse == reverse){
		cout << "YES";
	} else {
		cout << "NO";
	}

}