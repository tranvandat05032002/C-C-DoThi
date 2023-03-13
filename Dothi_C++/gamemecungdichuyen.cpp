#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n, m;
	cin >> n >> m;
	int in[n][m];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> in[i][j];
		}
	}
	int res = 0;
	for(int i = 1; i <= n;){
		res += in[1][1];
		for(int j = 1; j <= m;){
			if(in[i][j+1] <= in[i+1][j] || in[i+1][j] <= in[i][j+1]){
				if(in[i][j+1] <= in[i+1][j]){
					res += in[i][j+1];
					j = j + 1;
				}
				else if(in[i+1][j] < in[i][j+1]){
					res += in[i+1][j];
					i = i + 1;
				}
			}
			if(j == m && i < n){
				while(i < n){
					res += in[i+1][j];
					i += 1;
				}
			}
			else if(i == n && j < m){
				while(j < m){
					res += in[i][j+1];
					j += 1;
				}
			}
			if(i == n && j == m) break;
		}
		break;
	}
	cout << res;
	return 0;
}
