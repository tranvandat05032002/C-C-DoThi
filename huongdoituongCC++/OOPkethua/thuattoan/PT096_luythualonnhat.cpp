#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lf double
const ll N = 1e18;
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(n == 1 || n == -1) cout << 1 << "\n";
		else if(n == 0) cout << 0 << "\n";
		else if(n > 0){
		    ll ans = n;
			while((lf)ans <= N / n)
			ans *= n;	
			cout << ans << "\n";
		}
		else{
			n = -n; int x = 1; ll ans = n;
			while((lf)ans <= N / n){
				ans *= n; x++;
			}
			if(x & 1) ans /= n;
			cout << ans << "\n";	
		}
	}
	return 0;
}
