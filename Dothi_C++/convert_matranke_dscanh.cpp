#include<bits/stdc++.h>
using namespace std;

int n, m;
int in[1001][1001];
vector<pair<int, int>>edge;
//0 1 1 1 0
//1 0 1 1 1
//1 1 0 1 1
//1 1 1 0 1
//0 1 1 1 0
int main(int argc, char** argv) {
	cin >> n;
	for(int i = 1; i <=n ; i++){
		for(int j = 1; j <= n ; j++){
			cin >> in[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(in[i][j] == 1 && i < j){
				edge.push_back({i, j});
			}
		}
	}
	for(auto x : edge){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}
