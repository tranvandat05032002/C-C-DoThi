#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll C(ll k,ll n) {
 if (k == 0 || k == n) return 1;
 if (k == 1) return n;
 return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
	ll t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int>mp;
		ll n = s.length(), totalString = 1, solan = 0, count = 0;
		for(int i = 0; i < n; i++){
			if(s[i] >= 65 && s[i] <= 90){
				mp[s[i]]++;
			}
		}
		for(auto it : mp){
			if(it.first != s[0]){
				n = n - solan;
				totalString *= C(it.second, n);
				solan = it.second;
			}
			else{
				totalString *= C(it.second, n);
				solan = it.second;
			}
		}
		while(totalString % 5 == 0){
			count++;
			totalString /= 5;
		}
		cout << count << endl;
	}
	return 0;
}
