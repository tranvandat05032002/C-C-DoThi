#include <bits/stdc++.h>
using namespace std;
#define test "bai2"
int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen(test".inp", "r", stdin);
    freopen(test".out", "w", stdout);
    string s;
    while(getline(cin, s)){
        string Hoten = "";
        for( int i = 0; i < s.size(); i++ ){
            if(s[i] != ',') Hoten += s[i];
            else break;
        }
        string Nam = "";
        for( int i = s.size() - 1; i >= 0; i-- ){
            if(s[i] >= 0 && s[i] <= '9' && s[i] != '-' && s[i] != ',') Nam += s[i];
            else if(s[i] == '-') break;
        }
        string Namsinh = "";
        for( int i = Nam.size() - 1; i >= 0; i-- ){
            Namsinh += Nam[i];
            .
        }
        cout << Hoten << " " << Namsinh << "\n";
    }
    return 0;
}
