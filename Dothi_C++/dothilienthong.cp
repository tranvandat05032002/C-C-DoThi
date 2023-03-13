#include<bits/stdc++.h>
#include<vector>
using namespace std;

typedef long long ll;
const int N = 1e5+5;
const ll MAX = 1e6 + 6;

ll n, m;
vector<int>adj[MAX];
bool visited[MAX];

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
void bfs(ll u){
	queue<int>q;
}


int main(int argc, char** argv) {
	return 0;
}
