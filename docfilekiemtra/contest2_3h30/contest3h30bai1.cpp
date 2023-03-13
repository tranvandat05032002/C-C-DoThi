#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; ll ans = 0;
    while(cin >> s){
        for(int i = 0; i < s.size(); i++)s[i] = tolower(s[i]);
        if(s == "tetrahedron") ans += 4;
        else if( s == "cube") ans += 6;
        else if( s == "octahedron") ans += 8;
        else if( s == "dodecahedron") ans += 12;
        else if( s == "icosahedron") ans += 20;
    }
    cout << ans;
    return 0;
}

