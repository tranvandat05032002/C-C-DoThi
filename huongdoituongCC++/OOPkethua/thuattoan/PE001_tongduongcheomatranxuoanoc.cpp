#include<bits/stdc++.h>
typedef long long ll;
const long long mod = 1e9 + 7;
using namespace std;

int main(int argc, char** argv) {
	ll t;
	cin >> t;
//	for(int i = 0; i < t; i++){
	while(t--){
//		cin >> in[i];
		int n;
		cin >> n;
		ll max = 0;
		if(n > max){
			max = n;
		}
		vector < ll > res(1e6);
	//	long long *res = new long long[max];
		res[1] = 1;
		res[2] = 10;
		res[3] = 25;
		for(ll i = 4; i <= max; i++){
			ll number1 = i * i;
			ll number2 = number1 - (i - 1);
			ll number3 = number2 - (i - 1);
			ll number4 = number3 - (i - 1);
			res[i] = (res[i - 2] + (number1 % mod) + (number2 % mod) + (number3%mod) + (number4 % mod)) % mod; 
		}
		cout << res[max] << endl;
//	for(int i = 0; i < t; i++){
//		cout << res[in[i]] << endl;
//	}
//	}
	}
	return 0;
}
