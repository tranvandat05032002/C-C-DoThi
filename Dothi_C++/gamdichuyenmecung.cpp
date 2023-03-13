#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n, m;
	cin >> n >> m;
	int in[100][100];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> in[i][j];
		}
	}
	int res = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(i == j){
				res += in[i][j];
				if(in[i+1][j] < in[i][j+1]){
					res += in[i+1][j];
				}
				else{
					res += in[i][j+1];
				}
			}
			else if(i == n && j == m){
				res += in[i][j];
			}
		}
	}
	cout << res;
	return 0;
}
