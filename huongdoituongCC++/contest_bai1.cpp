#include <bits/stdc++.h>
using namespace std;
int Eratos(int n){
    for( int i = 2; i <= sqrt(n); i++ ){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    int ans = 0;
    for( int i = 1; i <= t; i++ ){
        int x; cin >> x;
        if(Eratos(x)) ans++;
    }
    cout << ans;
    return 0;
}