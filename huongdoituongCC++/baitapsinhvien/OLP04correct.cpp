#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Count(ll x, ll n){
	ll res = 0;
	for(int i = x; i <= n; i *= x){
		res += n / i;
	}
	return res;
}

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll n = s.size();
		ll res1 = 0, res2 = 0, count1 = 0, count2 = 0;
		count1 = Count(2, n);
		count2 = Count(5, n);
		map<char, ll>mp;
		for(char x : s) mp[x]++;
		for(auto x : mp){
			if(x.second > 1){
				res1 += Count(2, x.second);
				res2 += Count(5, x.second);
			}
		}
		ll res = min(abs(count1 - res1), abs(count2 - res2));
		cout << res << endl;
	}
	return 0;
}
