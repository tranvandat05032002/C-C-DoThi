#include <bits/stdc++.h>
using namespace std;
int l[10001];
void check(){
	long long lucas[50];
	lucas[0] = 2;
	lucas[1] = 1;
	for(int i=2; i<49; i++){
		lucas[i] = lucas[i-2]+lucas[i-1];
	}
	for(int i=0; lucas[i]<=1000; i++){
		l[lucas[i]] = 1;
	}
}

int main(int argc, char** argv) {
	check();
	int n;
	cin>>n;
	int in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
	}
	int count=0;
	for(int i=0; i<n; i++){
		if(l[in[i]]){
			count++;
		}
	}
	cout<<count;
	return 0;
}
