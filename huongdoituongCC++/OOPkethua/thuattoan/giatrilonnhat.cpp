#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int row, col;
	if(n & 1){
		row = n / 2 + 1;
		col = n / 2;
	}
	else{
		row = n / 2;
		col = n / 2;
	}
	vector<vector<int>>matrix;
	matrix.resize(row);
//	for(int i = 0; i < n; i++){
//		int x;
//		cin >> x;
//		matrix.push_back(x);
//	}
	for(int i = 0; i < row; i++){
		matrix[i].resize(col);
	}
//	for(int i = 0; i < col; i++){
//		for(int j = 0; j < row; j++){
//			cin >> matrix[i][j];
//		}
//	}
	for(int i = 0; i < col; i++){
		for(int j = 0; j < row; j++){
			cout << matrix[i][j];
		}
		cout << endl;
		
	}
	return 0;
}
