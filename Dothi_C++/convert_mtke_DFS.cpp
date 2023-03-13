#include<bits/stdc++.h>
using namespace std;

int n;
int in[1001][1001];
vector<int>adj[1001];
bool visited[1001];
//0 1 1 0 1 0 0 0 0
//1 0 0 1 0 0 0 0 0
//1 0 0 0 0 1 1 0 1
//0 1 0 0 0 0 0 0 0
//1 0 0 0 0 0 0 1 0
//0 0 1 0 0 0 0 0 0
//0 0 1 0 0 0 0 0 0
//0 0 0 0 1 0 0 0 1
//0 0 1 0 0 0 0 1 0

int inp(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> in[i][j];
		}
	}
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(in[i][j] == 1 && i < j){
				adj[i].push_back(j);
				adj[j].push_back(i);			
			}
		}
	}
}
int dfs(int u){
	cout << u << " ";
	visited[u] = true;
	for(auto x : adj[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}

int main(int argc, char** argv) {
	inp();
	dfs(1);
	return 0;
}
