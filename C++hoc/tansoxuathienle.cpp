#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	map<int, int>mp;
	int n;
	cin>>n;
	int in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
		mp[in[i]]++;
	}
	for(int i=0; i<n; i++){
		if(mp % 2 != 0){
			std:cout<<in[i]<<" ";
		}
	}
	return 0;
}
