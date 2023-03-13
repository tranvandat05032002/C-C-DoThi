#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(int argc, char** argv) {
	int n, t;
	cin >> n >> t;
	int in[n];
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	sort(in, in + n);
	while(t--){
		int left, right;
		cin >> left >> right;
		cout << upper_bound(in, in + n, right) - lower_bound(in, in + n, left) << endl;
	}
	return 0;
}
