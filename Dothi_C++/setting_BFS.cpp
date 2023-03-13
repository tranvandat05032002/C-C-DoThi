#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int>adj[1001];
bool visited[1001];

void inp(){
	cin >> n >> m;
	for(int i = 1 ; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}
// setting thuat toan BFS
void bfs(int u){
	queue<int>q;
	q.push(u);
	visited[u] = true;
	int count = 0;
	while(!q.empty()){
		int v = q.front(); //lay node dau hang doi
		q.pop(); //xoa node dau hang doi
		cout << v << " "; // in node da lay hang doi
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
