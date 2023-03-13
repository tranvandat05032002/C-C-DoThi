#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int ans = 0;
		for(char i : s) ans += (i - '0');
		if(ans % 9 == 0 && (s[s.size() - 1] == '0' || s[s.size() - 1] == '5')) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
