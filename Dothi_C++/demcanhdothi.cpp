#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include <algorithm>
#include<map>
using namespace std;

typedef long long ll;
const int N = 1e5+5;
const ll MAX = 1e6 + 6;
ll n, m;
vector<int>adj[MAX];
bool visited[MAX];
map<int, int>mp;

void inp(){
	cin >> n >> m;
	int count[1001] = {0};
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		mp[x] += 1;
		mp[y] += 1;
	}
	for(auto x : mp){
		cout << x.second << endl;
	}
}

int main(int argc, char** argv) {
	inp();
	return 0;
}
