#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n= s.length();
	int check = 1;
	for(int i = 0; i < n; i++){
		if((s[i] - '0') % 2 == 0){
			continue;
			check = 1;
		}
		cout << s[i];
	}
	if(check == 1){
		cout << 0;	
	}
}
