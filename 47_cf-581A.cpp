#include <iostream>
using namespace std;

int main(){
	int red, blue;
	cin >> red >> blue;
	int mix;
	if(red < blue){
		mix = red;
		cout << mix << " " << (blue - red) / 2;

	} else if(blue < red){
		mix = blue;
		cout << mix << " " << (red - blue) / 2;

	} else {
		mix = red;
		cout << mix << " " << 0;
	}

}