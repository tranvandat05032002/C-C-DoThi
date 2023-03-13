#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int main(int argc, char** argv) {
	int in[N];
	int n;
	cin >> n;
	int max = -1e9+7;
	for(int i = 0; i < n; i++){
		cin >> in[i];
		max = ((in[i] + in[i+1]) + abs(in[i] - in[i+1]));
	}
	cout << max;
	return 0;
}
