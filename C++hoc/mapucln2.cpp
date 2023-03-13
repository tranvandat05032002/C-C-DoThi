#include <bits/stdc++.h>
using namespace std;
map<int , int > mp;
void solve(int n){
	for(int i=1; i<sqrt(n); i++){
		if(n%i==0){
			mp[i]++;
		}
		if(n/i != i){
			mp[n/i]++;
		}
	}
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
		solve(in[i]);	
	}
	int res = 1;
	for(auto it:mp){
		if(it.second >= 2){
			res = it.first;
		}
	}
	mp.clear();
	std:cout<<res;
	return 0;
}
