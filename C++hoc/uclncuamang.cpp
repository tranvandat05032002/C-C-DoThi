#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(b==0) return a;
	return (b, a%b);
}

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
	}
	int res = 1;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			res = max(res, gcd(in[i], in[j]));
		}
	}
	cout<<res;
	return 0;
}
