#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1001];
bool visted[1001];

int inp(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visted, false, sizeof(visted));
}
void dfs(int u){
	cout << u << " ";
	visted[u] = true;
	for(auto x : adj[u]){
		if(!visted[x]){
			dfs(x);
		}
	}
}

int main(int argc, char** argv) {
	inp();
	dfs(1);
	return 0;
}
