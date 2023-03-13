#include <stdio.h>
#include <stdlib.h>
#define ll long long
const int mod = 1e9+7;
ll lt(ll a, ll b, ll c){ 
	ll res = 1;
	while(b){
		if(b%2 == 1){   
			res = res*a%c;  
		}
		a = a*a%c; 
		b/=2;		
	} return res;
}
int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	while(t--){
		ll x, y, z;
		scanf("%lld%lld%lld", &x, &y, &z);
		printf("%lld\n", lt(x, lt(y, z, mod-1), mod));
	}
	return 0;
}
