#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int in[n];
	map<ll,bool>mp;
	for(int i=0; i<n; i++){
		cin>>in[i];
		if(in[i] > 0){
			mp[in[i]] = true;
		}
	}
	for(int i=1; i<1000001; i++){
		if(mp[i] == false){
			std:cout<<i;
			break;
		}
	}
	return 0;
}
