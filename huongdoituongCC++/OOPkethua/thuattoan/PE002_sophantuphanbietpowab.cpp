#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<cmath>
#define ll long long
using namespace std;
ll powmod(ll x, ll n){
	int res = 1;
	int temp = x;
	while(n > 0){
		if(n & 1) res = res * temp;
		n >>= 1;
		temp = temp * temp;
	}
	return res;
}
int main(int argc, char** argv) {
	ll n;
	cin >> n;
	vector<ll>savePow;
	set <ll> notDulicate;
	for(int i = 2; i <= n; i++){
		for(int j = 2; j <= n; j++){
			savePow.push_back(powmod(i, j));
			notDulicate.insert(powmod(i, j));
		}
	}
	cout << notDulicate.size() << endl;
//	sort(savePow.begin(), savePow.end());
//	int countDuplicate = 0;
	for(int i = 0; i < savePow.size(); i++){
//		if(savePow[i] == savePow[i+1]){
//			countDuplicate++;
//		}
		cout << savePow[i] << " ";
	}
	cout << endl;
	for(auto it : notDulicate) cout << it << " " ;
//	cout << savePow.size() - countDuplicate;
	return 0;
}
