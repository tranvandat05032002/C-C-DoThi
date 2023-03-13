#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 1e4;
bool isPrime(ll n){
    if(n <= 1) return false;
    if(n % 2 == 0) return n == 2;
    if(n % 3 == 0) return n == 3;
    for(ll i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector <ll> ans;
    for( int i = 2; i <= 1e4; i++ ){
        if(isPrime(i)) ans.push_back(i);
    }
    ll cnt = 0;
    set <ll> se;
    for(int i = 0; i < ans.size(); i++ ){
        for( int j = 0; j < ans.size(); j++ ){
            for( int k = 0; k < ans.size(); k++ ){
                if(ll(ans[i] * ans[i]) + ll(ans[j] * ans[j] * ans[j]) + ll(ans[k] * ans[k] * ans[k] * ans[k]) <= n) 
                se.insert(ll(ans[i] * ans[i]) + ll(ans[j] * ans[j] * ans[j]) + ll(ans[k] * ans[k] * ans[k] * ans[k]));
                else break;
            }
        }
    }
    cout << se.size();
    return 0;
}
