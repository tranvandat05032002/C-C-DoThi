#include<bits/stdc++.h>
#define test "bai4"
#include<string>
using namespace std;

int main(int argc, char** argv) {
	freopen(test".inp", "r", stdin);
	freopen(test".out", "w", stdout);
	int t;
	cin >> t;	
	while(t--){
		string s;
		cin >> s;
		int res = 0;
		int n = s.size();
		for(int i = 0; i < n; i++){
			res += (s[i] - '0');
		}
			if(((s[s.size() - 1]) - '0') % 2 != 0 && res % 9 == 0){
				cout << "Yes";
			}
			else{
				cout <<"No";
			}
		cout << endl;
	}
	return 0;
}
