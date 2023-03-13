#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(a * b != 0){
		if(a > b){
			a %= b;
		}
		else {
			b %= a;
		}
	}
	return a + b;
}

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int in[n+1];
	int array[n][n];
	int count = 0;
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n ; j++){
			array[i][j] = gcd(in[i], in[j]);
			if(array[i][j] == 1){
				count++;
			}
		}
	}
	for(int i =0 ; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << count;
	return 0;
}
