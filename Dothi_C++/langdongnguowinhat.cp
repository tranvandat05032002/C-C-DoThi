#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include <algorithm>
using namespace std;

typedef long long ll;
const int N = 1e5+5;
const ll MAX = 1e6 + 6;
ll n, m;
int ans = 1;
vector<int>adj[MAX];
bool visited[MAX];
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= m ; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
void bfs(int u){
	ans = 1;
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
				ans++;
//				cout << ans <<" ";
			}
		}
	}
}

int main(int argc, char** argv) {
	inp();
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			bfs(i);
			count = max(count, ans);
		}
	}
	cout << count;
	return 0;
}
