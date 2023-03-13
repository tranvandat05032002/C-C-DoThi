#include<bits/stdc++.h>
using namespace std;
int cmp(int A, int B){
	return A > B;
}
int main(int argc, char** argv) {
	int n;
	cin >> n;
	int in[n+1];
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	sort(in, in + n, greater<int>());
	for(int i = 0; i < n; i++){
		cout << in[i] << " ";
	}
	return 0;
}
