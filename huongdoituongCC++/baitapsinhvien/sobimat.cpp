#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	map<int, int>mp;
	while(t--){
		int n;
		cin >> n;
		mp[n]++;
	}
	for(auto& x : mp){
		if(x.second == 1){
			cout << x.first << endl;
		}
	}
	return 0;
}
