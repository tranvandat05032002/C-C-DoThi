#include<bits/stdc++.h>
#include<algorithm>
#include<set>
#include<map>
#include <unordered_map>  
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
	ll n, m;
	cin >> n >> m;
	ll in[n + 10];
	ll s[n + 10];
	s[0] = 0;
	unordered_map<ll,ll> mp;
	for(int i = 1; i <= n; i++){
		cin >> in[i];
		s[i] = s[i - 1] + in[i]; 	
	}
	ll ans = 0;
	for(int i = 0; i <= n; i++){
		ans += mp[s[i] % m];
		mp[s[i] % m]++;
	}
	cout << ans << endl;	
	return 0;
}
