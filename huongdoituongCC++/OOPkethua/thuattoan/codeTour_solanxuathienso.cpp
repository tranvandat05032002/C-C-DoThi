#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int in[n];
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	for(int i = 0; i < n; i++){
		mp[in[i]++];
	}
	for(int i = 0; i < mp.size(); i++){
		cout << mp[i] << " ";
	}
	return 0;
}
