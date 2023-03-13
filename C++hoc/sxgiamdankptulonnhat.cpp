#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
	}
	sort(in, in+n, greater<int>());
	int k;
	cin>>k;
	for(int i=0; i<k ; i++){
		cout<<in[i]<<" ";
	}
	return 0;
}
