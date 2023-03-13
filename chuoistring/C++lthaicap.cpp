#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long lt(long long a, long long b, long long c){
	long long res = 1;
	while(b){
		if(b%2 == 1){
			res = res*a%c;
		}
		a = a*a%c;
		b/=2;
	} return res;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long a, b, c;
		cin>>a>>b>>c;
		cout<<lt(a, lt(b, c, mod-1), mod)<<endl;
	}
	return 0;
}
