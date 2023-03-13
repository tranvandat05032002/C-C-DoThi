#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n; 
	cin >> n;
	int in[n];
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	for(int i = 0; i < n; i++){
		int dem = 1;
		for(int j = i; j < n; j++){
			if(in[i] == in[j]){
				dem++;
			}
			else{
				i++;
				dem = 1;
			}
		}
	}
	return 0;
}
