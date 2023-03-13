#include<bits/stdc++.h>
#include<cmath>
typedef long long ll;
const ll mod = 1e9 + 7;
using namespace std;

ll Mod(ll a, ll b){
    return (a % mod * b % mod) % mod;
}

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		n = int(n / 2);
		ll result = ( floor(( 3 + Mod(30, Mod(n , n)) + Mod(16, Mod(n, Mod(n, n))) + Mod(26, n) ) / 3) );
		result = result % mod;
		cout << result << endl;
	}
	
	return 0;
}
