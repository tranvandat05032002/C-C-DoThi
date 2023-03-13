#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>adj[1001];
int in[1001][1001];
int main(int argc, char** argv) {
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> in[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(in[i][j] == 1 && i < j){
				adj[i].push_back(j);
				adj[j].push_back(i);
			}
		}
	}
//0 1 1 1 0
//1 0 1 1 1
//1 1 0 1 1
//1 1 1 0 1
//0 1 1 1 0
	for(int i = 1; i <= n; i++){
		cout << i << ": ";
		for(auto it : adj[i]){
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}
