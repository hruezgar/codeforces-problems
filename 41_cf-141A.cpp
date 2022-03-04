#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string string1, string2, comb_str;
	cin >> string1 >> string2 >> comb_str;
	if(string1.length() + string2.length() != comb_str.length()){
		cout << "NO";
	} else {
		string str_sum = string1 + string2;
		sort(str_sum.begin(), str_sum.end());
		sort(comb_str.begin(), comb_str.end());
		if(str_sum == comb_str){
			cout << "YES";
		} else {
			cout << "NO";
		}


	}

}