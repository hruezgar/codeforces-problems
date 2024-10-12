#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int curbit;
	int xvalue;
	int yvalue;

	for (int i = 1; i < 6; i++){
		for (int j = 1; j < 6; j++){
			cin >> curbit;
			if (curbit == 1){
				xvalue = j;
				yvalue = i;
			}
		}
	}
	cout << (abs(3 - xvalue) + abs(3 - yvalue)) << endl;
	//cout << "1 in oldugu x: " << xvalue << endl << "1 in oldugu y: " << yvalue;
	
}