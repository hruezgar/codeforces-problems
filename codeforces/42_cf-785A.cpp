#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(){
	map<string, int> cisim = {
		{"Tetrahedron", 4},
		{"Cube", 6},
		{"Octahedron", 8},
		{"Dodecahedron", 12},
		{"Icosahedron", 20}
	};

	int line_num;
	int end_sum = 0;
	cin >> line_num;
	string cur_line;
	for(int i = 0; i < line_num; i++){
		cin >> cur_line;
		end_sum += cisim[cur_line];
	}

	cout << end_sum;

}