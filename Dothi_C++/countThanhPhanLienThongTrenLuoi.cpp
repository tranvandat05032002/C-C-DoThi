#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;

int n, m;
char in[1001][1001];
int dx[] = {-1 ,0 ,0 ,1};
int dy[] = {0 , -1 , 1, 0};
void dfs(int i, int j){
	in[i][j] = 'o';
	cout << i << " " << j << endl;
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && in[i1][j1] == 'x'){
			dfs(i1, j1);
		}
	}
}
void bfs(int i, int j){
	queue <pair<int,int>> q;
	q.push({i, j});
	in[i][j] = 'o';
	cout << i << " " << j << endl;
	while(!q.empty()){
		pair<int,int>top = q.front();
		q.pop();
		for(int k = 0; k < 4; k++){
			int i1 = top.first + dx[k];
			int j1 = top.second + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && in[i1][j1] == 'x'){
				q.push({i1, j1});
				cout << i1 << " " << j1 << endl;
				in[i1][j1] = 'o';
			}
		}
	}
}
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> in[i][j];
		}
	}
	int count = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(in[i][j] == 'x'){
				cout << "Thanh phan lien thong thu" << count + 1 << ":" << endl;
				bfs(i, j);
				++count;
			}
		}
	}
	cout << count << endl;
}
int main(int argc, char** argv) {
	inp();
	return 0;
}
