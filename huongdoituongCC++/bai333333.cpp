#include <bits/stdc++.h>
using namespace std;
int main(){
    int L, R; cin >> L >> R;
    string Kytu; cin >> Kytu; string ans = "";
    for( int i = 0; i < L - 1; i++ )
	 cout << s[i];
    for( int i = L - 1; i < R ; i++ ) 
	ans += s[i];
    reverse(ans.begin(), ans.end());
    cout << ans;
    for( int i = R; i < Kytu.size(); i++ )
	 cout << s[i];
    return 0;
}
