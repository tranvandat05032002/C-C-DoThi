#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	string in[n+1];
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	int max = 0;
	
//	for(int i = 0; i < n; i++){
//		max = ((in[i] + in[i+1]) + abs(in[i] - in[i + 1])/2);
//	}
	cout << max;
	return 0;
}
