#include <iostream>
#include <map>
using namespace std;

bool isfas(map<char, int> mymap){
	for (auto const& [key, val] : mymap)
	{
    	if(val == 0){
    		return false;
    	}
	}
	return true;
}

int main(){
	map<char, int> letters_dict = {
		{'a', 0},
		{'b', 0},
		{'c', 0},
		{'d', 0},
		{'e', 0},
		{'f', 0},
		{'g', 0},
		{'h', 0},
		{'i', 0},
		{'j', 0},
		{'k', 0},
		{'l', 0},
		{'m', 0},
		{'n', 0},
		{'o', 0},
		{'p', 0},
		{'q', 0},
		{'r', 0},
		{'s', 0},
		{'t', 0},
		{'u', 0},
		{'v', 0},
		{'w', 0},
		{'x', 0},
		{'y', 0},
		{'z', 0},
	};

	int str_len;
	cin >> str_len;
	char my_str[str_len];
	cin >> my_str;
	int i = 0;
	char c;
	while (my_str[i])
  	{
    	c=my_str[i];
    	my_str[i] = tolower(c);
    	i++;
  	}
	for(int i = 0; i < str_len; i++){
		letters_dict[my_str[i]]++;

	}

	if(isfas(letters_dict)){
		cout << "YES";
	} else {
		cout << "NO";
	}


}