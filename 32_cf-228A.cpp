#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> colors;
	for(int i = 0; i < 4; i++){
		int cur_color;
		cin >> cur_color;
		colors.insert(cur_color);

	}

	cout << 4 - colors.size();
}