#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	string s;
	cin >> s;
	int k;
	cin >> k;
	int n = s.length();
	for(int i = 0; i < n; i++){
		if(i == k){
			i++;
		}
		cout << s[i];
	}
	return 0;
}
