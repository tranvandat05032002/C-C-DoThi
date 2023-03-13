#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007;
ll add(ll a, ll b){
	return ((a%mod)*(b%mod))%mod;
}
ll sum(ll n){
	if(n%2==0)
        return add(n,2+add(n-1,n+1));
    else
        return add(2*n-1,1+add(n+1,(n-1)/2));
}
int main(){
    int t;
    cin >> t;    
    while(t--){
        ll n;
        cin >> n;
        cout << sum(n) <<'\n';
    }
    return 0;
}
