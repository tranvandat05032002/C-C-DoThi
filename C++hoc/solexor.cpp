#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n; 
	cin>> n;
	int in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
	}
	int res = in[0];
	for(int i=1; i<n; i++){
		res ^=in[i];
	}
	cout<<res;
	return 0;
}
