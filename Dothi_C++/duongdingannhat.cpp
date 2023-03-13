#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include <algorithm>
using namespace std;

typedef long long ll;
const int N = 1e5+5;
const ll maxN = 1e6 + 6;
ll n, m;
int d[maxN], par[maxN];
bool visit[maxN];
vector <int> g[maxN];

void inp(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y, index;
		cin >> x >> y >> index;
		g[x].push_back(y);
		g[y].push_back(x);
	}
}

void bfs(int s) {
    fill_n(d, n + 1, 0);
    fill_n(par, n + 1, -1);
    fill_n(visit, n + 1, false);

    queue <int> q;
    q.push(s);
    visit[s] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (!visit[v]) {
                d[v]     = d[u] + 1;
                par[v]   = u;
                visit[v] = true;
                q.push(v);
            }
        }
    }
}
void Path(int u){
	fill_n(d, n + 1, 0);
	memset(visit, false, sizeof(visit));
	memset(par, 0, sizeof(par));
	bfs(1);
	if (!visit[u]) cout << "IMPOSSIBLE";
	else {
	    vector <int> path;
	    for (int v = u; v != -1; v = par[v])
	        path.push_back(v);
	    reverse(path.begin(), path.end());
	    
//	    cout << path.size();
		for(int x : path){
			cout << x << " ";
		}	
	}
}

int main(int argc, char** argv) {
	inp();
	Path(n);
	return 0;
}
