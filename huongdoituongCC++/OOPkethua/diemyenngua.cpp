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
	for(int i = 1; i <= n; i++){
		int min = in[i][1];
		for(int j = 1; j <= m; j++){
			if(in[i][j] < min){
				min = in[i][j];
				cout << min << " ";
			}
		}
		cout << endl;
	}
//	for(int j = 1; j <= m; j++){
//		int max = in[1][j];
//		for(int i = 1; i <= n; i++){
//			if(in[i][j] > max){
//				max = in[i][j];
//				cout << max < " ";
//			}
//		}
//	}
	return 0;
}
