#include <bits/stdc++.h>
using namespace std;
int f[1000];
void fibo(){
	int fibo[50];
	fibo[0] = 1;
	fibo[1] =1;
	for(int i=2; i<49; i++){
		fibo[i] = fibo[i-1]+fibo[i-2];
	}
	for(int i=0; fibo[i]<1000; i++){
		f[fibo[i]] = 1;
	}
}

int main(int argc, char** argv) {
	fibo();
	int n;
	cin>>n;
	int in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
	}
	int dem=0;
	for(int i=0; i<n ; i++){
		if(f[in[i]]){
			dem++;
		}
	}
	std:cout<<dem;
	return 0;
}
