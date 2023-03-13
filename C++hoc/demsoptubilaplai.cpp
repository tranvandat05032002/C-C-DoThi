#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int cnt[1000001];

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int in[n];
	memset(cnt, 0, sizeof(cnt));
	for(int i=0; i<n; i++){
		cin>>in[i];
		cnt[in[i]]++;
	}
	int res = 0;
	for(int i=0; i<n; i++){
		if(cnt[in[i]] >=2){
			++res;
		}
	}
	std:cout<<res;
	return 0;
}
