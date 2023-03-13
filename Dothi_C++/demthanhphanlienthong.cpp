#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int>adj[1001];
bool visited[1001];
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
void dfs(int u){
	visited[u] = true;
	cout << u << " ";
	for(int x : adj[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}
void connectedComponent(){
	int ans = 0;
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			ans++;
			cout << "cac dinh thuoc thanh phan lien thong thu" << ans << ":" << endl;
			dfs(i);
		}
	}
	cout << ans << endl;
}
int main(int argc, char** argv) {
	inp();
	connectedComponent();
	return 0;
}
