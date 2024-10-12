#include <iostream>
using namespace std;
int main(){
    int num, subtim;
    cin >> num >> subtim;
    for (int i = 0; i < subtim; i++){
    	if(num % 10 == 0){
    		num /= 10;
    	} else {
    		num--;
    	}
    }
    cout << num;
}