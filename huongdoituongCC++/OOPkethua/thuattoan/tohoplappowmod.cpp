#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7, N = 1e6;

ll powmod(ll a, ll b, ll m){
	ll res = 1;
	a = a % m;
	while(b){
		if(b % 2 != 0){
			res *= a;
			res %= m;
		}
		a *= a;
		a %= m;
		b /= 2;
	}
	return res;
}

ll eculid(ll a, ll m){
	return powmod(a, m - 2, m);
}

ll nFact[1000005];
void factorial(){
	nFact[0] = 1;
	for(int i = 1; i <= N; i++){
		nFact[i] = i * nFact[i - 1];
		nFact[i] %= mod;
	}
}
int main(int argc, char** argv) {
	ll t;
	cin >> t;
	factorial();
	ll n, k;
	while(t--){
		cin >> n >> k;
		cout << nFact[n] % mod * eculid(nFact[k] * nFact[n - k] % mod, mod) % mod << endl;
	}
	return 0;
}
