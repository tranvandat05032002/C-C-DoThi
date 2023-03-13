#include <bits/stdc++.h>
using namespace std;
const unsigned mod=1e9+7;
using ll = long long;
const ll inmod = 250000002;

ll mod_1(ll x, ll y){
	return ((x%mod)*(y%mod))%mod;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	cout << mod_1(mod_1(n,n+1),mod_1(mod_1(n+2,n+3),inmod));
	return 0;
}
