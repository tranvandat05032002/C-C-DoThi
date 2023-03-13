#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cout.tie(0); cout.tie(0);
    int l, r; cin >> l >> r; cin.ignore();
    string s; cin >> s; string ans = "";
    for( int i = 0; i < l - 1; i++ ) cout << s[i];
    for( int i = l - 1; i < r ; i++ ) ans += s[i];
    reverse(ans.begin(), ans.end());
    cout << ans;
    for( int i = r; i < s.size(); i++ ) cout << s[i];
    return 0;
}