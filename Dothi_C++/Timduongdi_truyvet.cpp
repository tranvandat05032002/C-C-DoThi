#include<bits/stdc++.h>
#include<vector>
using namespace std;

int n, m;
vector<int>adj[1001];
bool visited[1001];
int parent[1001];

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
	for(int x : adj[u]){
		if(!visited[x]){
			parent[x] = u; // luu parent cua x la u
			dfs(x);
		}
	}
}
void path(int first, int last){
	memset(visited, false, sizeof(visited));
	memset(parent, 0, sizeof(parent));
	dfs(first);
	vector<int>path;
	if(!visited[last]){
		cout << "Khong tim duoc duong di";
	}
	else{
		while(first != last){
			path.push_back(last);
			// truy vet nguoc lai
			last = parent[last];
		}
		path.push_back(first);
		reverse(path.begin(), path.end());
		
		for(int x : path){
			cout << x << " ";
		}
	}
}
int main(int argc, char** argv) {
	inp();
	int first, last;
	cin >> first >> last;
	path(first, last);
	return 0;
}
