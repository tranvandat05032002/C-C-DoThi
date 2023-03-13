#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int in[n];
	map<int, int>mp;
	vector<int>v;
	for(int i = 0; i < n; i++){
		cin >> in[i];
		mp[in[i]]++;
	}
	int count = 0;
	for(auto& x : mp){
		if(x.second >= 3){
			count++;
			v.push_back(x.first);
		}
	}
	cout << count << endl;
	for(auto& x: v) cout << x << " ";
	return 0;
}
