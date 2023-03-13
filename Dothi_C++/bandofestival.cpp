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
bool visited[MAX];
ll parent[1001];

void inp(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		ll x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
}
void dfs(int u){
	visited[u] = true;
	for(int x : adj[u]){
		if(!visited[x]){
			dfs(x);
			parent[x] = u;
		}
	}
}
void Path(ll last){
	memset(visited, false, sizeof(visited));
	memset(parent, 0, sizeof(parent));
	dfs(1);
	if(!visited[last]){
		cout << "NO";
	}
	else{
		vector<ll>path;
		while(last != 1){
			path.push_back(last);
			last = parent[last];
		}
		path.push_back(1);
		reverse(path.begin(), path.end());
		if(path.size() == n){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
}

int main(int argc, char** argv) {
	inp();
	Path(n);
	return 0;
}
