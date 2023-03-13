#include<iostream>
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin >> n;
	int in[n];
	for(int &x:in){
		cin>>x;
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(in[i] > in[j]){
				int tmp = in[i];
				in[i] = in[j];
				in[j] = tmp;
			}
		}
	}
	for(int x:in){
		cout<<x<<" ";
	}
	return 0;
}
