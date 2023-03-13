#include<bits/stdc++.h>
#include<vector>
#define test "daonguocvitrii"
typedef long long ll;
using namespace std;
int main(int argc, char** argv) {
	ll n, left, right;
	int in[n];
	freopen(test".inp","r",stdin);
	freopen(test".out","w",stdout);
	vector<int>vt;
	cin >> n >> left >> right;
	for(int i = 1; i <= n; i++){
		cin >> in[i];
		vt.push_back(in[i]);
	}
	std::reverse(vt.begin() + left - 1, vt.begin() + right);
	for(auto it : vt) cout << it << " ";
    cout << endl;
	return 0;
}
