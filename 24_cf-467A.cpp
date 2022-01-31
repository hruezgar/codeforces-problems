#include <iostream>
using namespace std;

int main(){
	int rnum; // num of rooms
	cin >> rnum;
	int plive; // people living in current room
	int capacity; // capacity of current room
	int canenter = 0; // available rooms
	for(int i = 0; i < rnum; i++){
		cin >> plive >> capacity;
		if(capacity - plive >= 2){
			canenter++;
		}
	}
	cout << canenter;
}