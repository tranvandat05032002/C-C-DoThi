#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;

typedef long long ll;
const int N = 1e5+5;
const ll MAX = 1e6 + 6;
ll n, m, t, l, r;
vector<pair<int, int>>adj[MAX];
bool visited[MAX];
int lienthong = 0;
void reset(){
	memset(visited, false, sizeof(visited));
}
void bfs(int u, int l, int r){
	lienthong++;
	queue<int>q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(auto x : adj[v]){
			if(x.second >= l && x.second <= r) continue;
			if(!visited[x.first]){
				q.push(x.first);
				visited[x.first] = true;
				
			}
		}
	}
}
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back({y, i});
		adj[y].push_back({x, i});
	}
	cin >> t;
	while(t--){
		cin >> l >> r;
		lienthong = 0;
		for(int i = 1; i <= n; i++){
			if(!visited[i]){
				bfs(i, l, r);
			}
		}
		cout << lienthong << endl;
		reset();
	}
}

int main(int argc, char** argv) {
	inp();
	
	return 0;
}
