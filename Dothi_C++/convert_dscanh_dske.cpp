#include<bits/stdc++.h>
#include<vector>
using namespace std;

int n, m;
vector<int>adj[1001];
int main(int argc, char** argv) {
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1 ; i <= n; i++){
		cout << i << ": ";
		for(auto x : adj[i]){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
