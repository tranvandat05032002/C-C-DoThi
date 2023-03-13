#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int in[n];
	for(int i=0; i<n; i++){ // do phuc tap O(n^2)
		cin>>in[i];
	}
	int res=INT_MAX;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			res=min(res, max(in[i], in[j]) - min(in[i], in[j]));
		}	
	}
	cout<<res;
	return 0;
}
