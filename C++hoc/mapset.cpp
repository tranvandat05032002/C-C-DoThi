#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(int argc, char** argv) {
	int t;
	cin>>t;
	map<ll , bool>mp;
	while(t--){
		int n;
		cin>>n;
		for(int i=0; i<n; i++){
			ll x;
			cin>>x;
			mp[x] = true;
		}
		for(int i=0; i<n; i++){
			if(mp[i]==true){
				cout<<i<<" ";
			}
			else{
				cout<<-1<<" ";
			}
		}
	}
	return 0;
}
