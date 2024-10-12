#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	cin >> input;
	int inp_num = stoi(input);
	inp_num++;
	bool not_found = true;
	int len = input.length();
	string proc;
	bool next;
	while(not_found){
		next = false;
		proc = to_string(inp_num);
		for(int i = 0; i < len - 1; i++){
			for(int j = 0; j < len - i - 1; j++){
				if(proc[j] == proc[j + i + 1]){
					next = true;
				}
			}
		}
		if(next == false){
			break;
		}
		inp_num++;
	}
	cout << proc;
}