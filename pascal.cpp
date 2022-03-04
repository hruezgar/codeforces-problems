#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	int my_pasc[num][num];

	for(int i = 0; i < num; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || j == i){
				my_pasc[i][j] = 1;
			} else {
				my_pasc[i][j] = my_pasc[i - 1][j - 1] + my_pasc[i - 1][j];
			}
			cout << my_pasc[i][j] << " ";
		}
		cout << "\n";

	}

}