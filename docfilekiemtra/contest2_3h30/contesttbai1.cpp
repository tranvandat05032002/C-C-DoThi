#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	string s;
	cin >> s;
	int n = s.length();
	int k;
	cin >> k;
	string full = "";
	for(int i = k - 1; i >= 0 ; i--){
		full += s[i];
	}
	for(int i = n-1; i >= k; i--){
		full += s[i];
	}
	cout << full;
	return 0;
}
