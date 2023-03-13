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
//ll parent[1001];

void inp(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		ll x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}
void bfs(int u){
	queue<int>q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		ll v = q.front();
		q.pop();
		cout << v << " ";
		for(int x : adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
//				parent[x] = v;
			}
		}
	}
}
void Path(ll last){
	memset(visited, false, sizeof(visited));
	memset(parent, 0, sizeof(parent));
	bfs(1);
	if(!visited[last]){
		cout << "IMPOSSIBLE";
	}
	else{
		vector<ll>path;
		while(last != 1){
			path.push_back(last);
			last = parent[last];
		}
		path.push_back(1);
		reverse(path.begin(), path.end());
		cout << path.size();
	}
}

int main(int argc, char** argv) {
	inp();
	bfs(1);
	return 0;
}
