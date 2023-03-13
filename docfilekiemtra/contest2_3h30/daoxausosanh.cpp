#include<bits/stdc++.h>
using namespace std;
int cnt[26];
int main(int argc, char** argv) {
		long long ans = 1;
	string kytu;
	cin >> kytu;
	int n = kytu.length();
	for(int i = 0; i < n; ++i){
		int k = (kytu[i] - 'a');
		ans += i - cnt[k];
		cnt[k]++;	
	}
	cout << ans;
	return 0;
}
