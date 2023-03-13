#include<bits/stdc++.h>
using namespace std;

int in[100001];
void nt(){
	for(int i=0; i<=100000; i++)
		in[i] = 1;
	in[0] = in[1] = 0;
	for(int i=2; i<=1000; i++){
		if(in[i]){
			for(int j=i*i; j<=100000; j+=i){
				in[j] = 0;
			}
		}
	}
}
int main(int argc, char** argv) {
	nt();
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		if(in[i]){
			cout<<i<<" ";
		}
	}
	return 0;
}
