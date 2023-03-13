#include <bits/stdc++.h>
using namespace std;
#define test "bai3"
int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen(test".inp", "r", stdin);
    freopen(test".out", "w", stdout);
    string s;
    while(getline(cin, s)){
        string Hoten = "";
        for( int i = 0; i < s.size(); i++ ){
            if(s[i] != ';') Hoten += s[i];
            else break;
        }
        float ans = 0;
        for( int i = 0; i < s.size(); i++ ){
               float Diem = 0;
            while(s[i] >= '0' && s[i] <= '9'){
                Diem = Diem * 10 + s[i] - '0';
                i++;
            }
            ans += Diem;
        }
        cout << Hoten << ":" << ans << "\n";
    }
    return 0;
}
