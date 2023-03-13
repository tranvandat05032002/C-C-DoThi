#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
#define rep(i,n) for(int i = 0 ; i < (n) ; ++i)
#define f first
#define mp make_pair
#define name "oj"
void setIO(){
	cin.tie(0)->sync_with_stdio(0);
	if(fopen(name".inp", "r")){
		freopen((name".inp"), "r", stdin);
		freopen((name".out"), "w", stdout);
	}
}
int main(){
	setIO();
	int n,k;
	string s;
	cin>>n>>k;
	cin.ignore(n,'\n');
	while(n--){
		getline(cin,s);
		for(char &x : s){
			if(isupper(x)){
				if(x + k > 'Z'){
					x=x-26;
					x+=k;
				}else{
					x+=k;
				}
			}
		}
		cout<<s<<endl;
	}
}
