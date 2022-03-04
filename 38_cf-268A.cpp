#include <iostream>
#include <vector>
using namespace std;

int main(){
	int cases;
	cin >> cases;
	vector<vector<int>> vec2d;
	int curnum;
	int count = 0;

	int x = 2, y = cases;

	for(int j=0;j<y;j++)
	{
		vector<int> v1d;
		for(int i=0;i<x;i++)
		{
			cin >> curnum;
			v1d.push_back(curnum);
		}
		vec2d.push_back(v1d);
	}
	for(int j = 0; j < cases; j++){
		for(int i = 0; i < cases; i++){
			if(vec2d[j][0] == vec2d[i][1]){
				count++;
			}

		}
	}
	/*
	# print vector
	for (int j = 0; j < vec2d.size(); j++)
	{
		for (int i = 0; i < vec2d[i].size(); i++)
		{
			cout << vec2d[j][i] << " ";
		}
		cout << "\n";
	}
	*/
	cout << count;
}