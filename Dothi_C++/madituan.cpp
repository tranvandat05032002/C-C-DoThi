#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;
const int N = 1e5+5;
const ll MAX = 1e6 + 6;

char in[MAX][MAX];
int dx[] = {-1, 1, 1, -1};
int dy[] = {-1, -1, 1, 1};
void bfs(int i, int j){
	queue <pair<int,int>> q;
	q.push({i, j});
	in[i][j] = '.';
	while(!q.empty()){
		pair<int,int>top = q.front();
		q.pop();
		for(int k = 0; k < 4; k++){
			int i1 = top.first + dx[k];
			int j1 = top.second + dy[k];
			if(i1 >= 1 && i1 <= 5 && j1 >= 1 && j1 <= 5 && in[i1][j1] == 'k'){
				q.push({i1, j1});
				in[i1][j1] = '.';
			}
		}
	}
}
void inp(){
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			cin >> in[i][j];
		}
	}
	int count = 0;
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			if(in[i][j] == 'k'){
				bfs(i, j);
				++count;
			}
		}
	}
	if(count == 1){
		cout << "valid";
	} 
	else{
		cout << "invalid";
	} 
}
int main(int argc, char** argv) {
	inp();
	return 0;
}
