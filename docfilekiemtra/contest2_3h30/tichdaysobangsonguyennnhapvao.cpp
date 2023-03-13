#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin >> n;
	int array[n+2];
	int ptu = 0; 
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			array[ptu++] = i;
		}
	}
	int l = 0; 
	int r = ptu;
	int tich = 1;
	while(l <= r){
		for(int i = l; i < r; i++){
			tich *= array[i];
		}
		if(tich == n){
			for(int i = l; i < r; i++){
				cout << array[i] << " ";
			} 
		}
		else{
			r--;
			tich = 1;
		}
	}
	return 0;
}
