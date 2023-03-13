#include <bits/stdc++.h>
using namespace std;


int main(int argc, char** argv) {
	int n;
	cin>>n;
	int in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
	}
	int sum = 0;
	for(int i=0; i<n; i++){
		sum+=in[i];
	}
	int left = 0;
	bool check = false;
	for(int i=0; i<n; i++){
		sum -=in[i];
		if(sum == left){
			cout<<i;
			check = true;
		}
		left+=in[i];
	}
	if(!check) cout<<-1;
	return 0;
}
