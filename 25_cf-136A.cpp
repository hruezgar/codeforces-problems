#include <iostream>
using namespace std;

int main(){
	int nfriends; // num of friends
	cin >> nfriends;
	int nogfriend; // num of giving friend
	int out_array[nfriends];
	for(int i = 1; i <= nfriends; i++){
		cin >> nogfriend;
		out_array[nogfriend - 1] = i;
	}
	for(int i = 0; i < nfriends; i++){
		cout << out_array[i] << " ";

	}
}