#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const unsigned MOD = 10000007;
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int mu, x;
		cin>>mu>>x;
		int in[mu];
		for(int i=0; i<mu; i++){
			cin>>in[i];
		}
		ll res = 0;
		ll lt=1;
		for(int i=mu-1; i>=0; i--){
			res += lt*in[i];
			res = res%MOD;
			lt*=x;
			lt = lt%MOD;
		}
		std:cout<<res<<endl;
	}
	return 0;
}
