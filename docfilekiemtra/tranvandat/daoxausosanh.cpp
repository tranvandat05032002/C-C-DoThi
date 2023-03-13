#include<bits/stdc++.h>
using namespace std;
	int cnt[26];
int main(int argc, char** argv) {
	long long ans = 1;
	string s;
	cin >> s;
	int n = s.length();
	for (int i = 0; i < n; ++i) {
        int k = (s[i] - 'a');
        ans += i - cnt[k];
        cnt[k]++;
    }
	cout << ans<<endl;
	return 0;
}
