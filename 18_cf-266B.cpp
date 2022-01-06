#include <iostream>
using namespace std;
int main(){
	int len, num;
	cin >> len >> num;
	string line;
	cin >> line;
	for (int i = 0; i < num; i++){
		for (int j = 0; j < len - 1; j++){
			if(line[j] == 'B' && line[j + 1] == 'G'){
				line[j] = 'G';
				line[j + 1] = 'B';
				j++;
			}
		}
	}
	cout << line;
}