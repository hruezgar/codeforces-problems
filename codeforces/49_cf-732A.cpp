#include <iostream>
using namespace std;

int main(){
	int shovel_price;
	int dif_burl;
	cin >> shovel_price >> dif_burl;
	int last_digit = shovel_price % 10;
	for(int i = 0; i < 10; i++){
		if((last_digit * i) % 10 == dif_burl){
			cout << i;
			break;
		}
	}


}