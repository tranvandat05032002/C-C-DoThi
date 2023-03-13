#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
	}
	int min_value=in[0];
	int res = -1e9;
	for(int i=1; i<n; i++){
		if(in[i] > min_value){
		res = max(res, in[i]-min_value);
		}
		min_value = min(in[i], min_value);
	}
	if(res == -1e9){
		cout<<-1;
	}
	cout<<res;
	return 0;
}
