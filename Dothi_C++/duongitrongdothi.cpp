#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;

typedef long long ll;
const int N = 1e5+5;
const ll MAX = 1e6 + 6;
ll n, m;
vector<int>adj[MAX];
bool visited[MAX];
map<int,int>mp;
void bfs(int u){
	queue<int>q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int component = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			bfs(i);
			component++;
		}
	}
	if(component == 1){
		cout << adj[1].size();
	}
}
int main(int argc, char** argv) {
	inp();
	return 0;
}
