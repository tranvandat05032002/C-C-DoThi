#include<bits/stdc++.h>
using namespace std;
#define ll long long
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
const int MOD = (int) 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int x,n;
    int p[200005];
    map<int,int>mp;
    cin>>x>>n;
    set<int>s;
    s.insert(0);
    s.insert(x);
    mp[x]=1;
   for(int i=0;i<n;i++){
       cin>>p[i];
       auto it = s.lower_bound(p[i]);
       int r=*it;
       --it;
       int l=*it;
       --mp[r-l];
       if(!mp[r-l])
           mp.erase(r-l);
           s.insert(p[i]);
           ++mp[r-p[i]];
           ++mp[p[i]-l];
           cout<<((--mp.end())->first)<<" ";
   }
}
