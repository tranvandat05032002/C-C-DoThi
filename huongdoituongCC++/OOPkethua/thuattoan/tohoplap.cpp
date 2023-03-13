#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7, N = 1e6 ;
ll t, n, k ;
ll powmod( ll a, ll b, ll m ){
	ll res = 1;
	a %= m;
	while( b ){
		if( b & 1 ){
			res *= a;
			res %= m;
		}
			a *= a;
			a %= m;
			b /= 2;
		}
    return res;
}
ll euclid( ll a, ll m ){
	cout << powmod(a, m - 2, m) % mod << endl;
	return powmod( a , m - 2, m );
}
ll f[1000005];
void fac(){
		f[0] = 1;
		for( int i = 1; i <= N; i++ ){
			f[i] = i * f[i - 1];
			f[i] %= mod;
		}
}
int main(){
	cin >> t;
	fac();
	while( t-- ){
		cin >> n >> k;
		
	cout << f[n] % mod * euclid( f[k] * f[n - k] % mod, mod ) % mod << endl;
	}
	return 0;
}

