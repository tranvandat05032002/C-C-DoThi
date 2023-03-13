#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int in[n];
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	long long sum = 0;
	for(int i = 0; i < i + 1; i++) {
		sum += in[i];
	}
	cout << sum;
	return 0;
}
