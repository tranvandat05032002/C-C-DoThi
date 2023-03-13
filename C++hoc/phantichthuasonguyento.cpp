#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll degree(ll n, ll p){
	int ans = 0;
	while(n % p == 0){
		ans++;
		n /= p;
	}
	return ans;
}
ll countDivisor(ll n){
	ll res2 = 1;
	ll res3 = 1;
	ll res5 = 1;
	ll res7 = 1;
	ll result = 1;
	if(degree(n, 2) != 0 || degree(n, 3) != 0 || degree(n, 5) != 0 || degree(n, 7) != 0){
		res2 *= (degree(n, 2) + 1);
		res3 *= (degree(n, 3) + 1);
		res5 *= (degree(n, 5) + 1);
		res7 *= (degree(n, 7) + 1);
		result = res2 * res3 * res5 * res7;
	}
	else{
		res2 = res3 = res5 = res7 = 0;
	}
	return result;
}
int main(int argc, char** argv) {
	ll n;
	cin >> n;
	int result = countDivisor(n) % 2 != 0 ? 1 : 0;
	cout <<result << endl; 
	return 0;
}
