#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
	string line;
	getline(cin, line);
	set<char> letters;
	if(line.length() == 2){
		cout << 0;
	} else {
		for(int i = 3; i <= line.length();i += 3){
			letters.insert(line[i - 2]);
		}
		cout << letters.size();
	}
	
}