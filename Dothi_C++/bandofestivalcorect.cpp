#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include <algorithm>
using namespace std;

typedef long long ll;
const int N = 1e5+5;
const ll MAX = 1e6 + 6;
ll n, m;
vector<ll>adj[MAX];
map<int, int>mp;

void inp(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		mp[x] += 1;
		mp[y] += 1;
	}
	bool check = true;
	for(auto &it : mp){
		if(it.second <= 1){
			check = false;
		}
	}
	if(check){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

}
int main(int argc, char** argv) {
	inp();
	return 0;
}
