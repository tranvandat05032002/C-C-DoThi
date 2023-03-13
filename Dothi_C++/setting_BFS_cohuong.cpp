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
	}
	memset(visited, false, sizeof(visited));
}
void bfs(int u){
	visited[u] = true;
	queue<int>q;
	q.push(u);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		cout << v << " ";
		for(int x : adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}
int main(int argc, char** argv) {
	inp();
	bfs(1);
	return 0;
}
