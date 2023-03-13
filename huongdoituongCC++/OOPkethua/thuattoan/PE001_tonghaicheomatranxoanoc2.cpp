#include<bits/stdc++.h>
#include<vector>
const long long mod = 1e9 + 7;
typedef long long ll;
using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector <ll> in(n + 1);
		in[1] = 1;
		in[2] = 10;
		in[3] = 25;
		for(ll i = 4; i <= n; i++){
			ll number1 = i*i;
			ll number2 = number1 - (i - 1);
			ll number3 = number2 - (i - 1);
			ll number4 = number3 - (i - 1);
			in[i] = (in[i - 2] + (number1 % mod) + (number2 % mod) + (number3 % mod) + (number4 % mod)) % mod;
		}
		cout << in[n] << endl;
	}
	return 0;
}
