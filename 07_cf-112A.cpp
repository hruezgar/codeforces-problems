#include <iostream>
#include <string>
using namespace std;

string makeLow(string vtol){
	for (auto& c : vtol) {
        c = tolower(c);
    }
    return vtol;
} // I didnt write this function myself. Just copied it from stackoverflow

int main(){
    string t1;
    string t2;
    cin >> t1 >> t2;
    t1 = makeLow(t1);
    t2 = makeLow(t2);

    int out = t1.compare(t2);
    cout << out;

}
