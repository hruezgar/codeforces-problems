#include <iostream>
#include <set>
using namespace std;

int main(){
	int levels;
	cin >> levels;

	set<int> passed_levels;

	int x_num_of_passed;
	cin >> x_num_of_passed;
	int curlevel;
	for(int i = 0; i < x_num_of_passed; i++){
		cin >> curlevel;
		passed_levels.insert(curlevel);
	}

	int y_num_of_passed;
	cin >> y_num_of_passed;
	for(int i = 0; i < y_num_of_passed; i++){
		cin >> curlevel;
		passed_levels.insert(curlevel);
	}

	bool guy = true;
	for(int i = 1; i <= levels; i++){
		if(!passed_levels.count(i)){
			guy = false;
		} 
	}
	if(guy){
		cout << "I become the guy.";
	} else {
		cout << "Oh, my keyboard!";
	}

}
