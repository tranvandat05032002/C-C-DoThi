#include<bits/stdc++.h>
using namespace std;
//5 9
//1 2
//1 3
//1 4
//2 3
//2 4
//2 5
//3 4
//3 5
//4 5
int n, m;
int in[1001][1001];
int main(int argc, char** argv) {
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		in[x][y] = in[y][x] = 1;
		
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << in[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
