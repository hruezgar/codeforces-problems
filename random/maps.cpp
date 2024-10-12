#include <iostream>
#include <map>
using namespace std;


template<typename Map>
void PrintMap(Map& m)
{
    cout << "[ ";
    for (auto &item : m) {
        cout << item.first << ":" << item.second << " ";
    }
    cout << "]\n";
}
int main(){
	map<char, int> letters_dict = {
		{'a', 0},
		{'b', 0},
		{'c', 0},
		{'d', 0},
	};
	PrintMap(letters_dict);

}