#include <iostream>
#include <string>
#include <set>
#include <iterator>
using namespace std;
int main(){
	string input;
	cin >> input;
	set<char> myset;
	
	for (int i = 0; i < input.length(); i++){
		myset.insert(input[i]);
	}
	int disCh = myset.size();
	if (disCh % 2 == 0){
		cout << "CHAT WITH HER!";
	} else if (disCh % 2 == 1){
		cout << "IGNORE HIM!";
	}
}