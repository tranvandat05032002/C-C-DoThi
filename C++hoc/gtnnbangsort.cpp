#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
	}
	sort(in, in+n);
	int res = INT_MAX;
	for(int i=1; i<n; i++){
		res=min(res, (in[i] - in[i-1]));
	}
	cout<<res;
	return 0;
}
