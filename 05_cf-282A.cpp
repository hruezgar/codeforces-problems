#include <iostream>
#include <string>
using namespace std;

int main(){
	int opnum;
	cin >> opnum;
	int x = 0;
	string curinput;
	for (int i = 0; i < opnum; i++){
		cin >> curinput;
		if (curinput == "X++" || curinput == "++X"){
			x++;
		} else if (curinput == "X--" || curinput == "--X"){
			x--;
		}
	}
	cout << x;

}