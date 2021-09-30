#include <iostream>
#include <string>
using namespace std;
int main() {

	int t;
	cin>>t;
	while(t--){
		string orig, rever = " ";
		cin>>orig;
		for (int i = 0; i < orig.length(); ++i) {
			cout<<orig[(orig.length())- i-1];
		}
	}
}
