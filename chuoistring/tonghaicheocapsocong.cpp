#include <bits/stdc++.h>
using namespace std;
int main(){
	long t;
	long mod = pow(10, 9);
	cin >> t;
	while(t--){
		long n, sum = 0, sum1 = 0, ans;
		cin >> n;
	//	n=n%mod;
		sum = (((n%mod)*((1+pow(n,2))%mod))%mod)/2;
		sum1 = (((n%mod)*((((n%mod)*(n%mod))%mod)+1)/2)%mod)%mod);
		ans = (((n%mod)*(2*(((n%mod)*(n%mod))%mod)+2)%mod)%mod)/2;
		if (n%2 != 0){
			ans -= sum1;
		}
		cout << ans << endl;	
	}
}
