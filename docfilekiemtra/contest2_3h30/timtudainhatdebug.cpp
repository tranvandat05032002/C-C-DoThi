#include <bits/stdc++.h>
using namespace std;
bool Check(string &s, int &k){
    for( int i = 0 ; i < s.size() - k + 1; i += k){
        if(s.substr(i, k) != s.substr(0, k)) return false;
    }
    return true;
}
int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; int ans = 0;
    while(getline(cin, s)){
        vector <int> v; int id = 0;
        for( int i = s.size() - 1; i >= 0; i-- ){
            if(!isdigit(s[i]) && !isalpha(s[i])) s.erase(i, 1);
        }
        bool flag = false;
        for( int i = 1; i < s.size(); i++ ){
            if(s.size() % i == 0){
                if(Check(s, i)){
                    flag = true; break;
                }
            }
        }
        if(flag) ans++;
        cout << ans;
    }
//    cout << ans;
    return 0;
}
