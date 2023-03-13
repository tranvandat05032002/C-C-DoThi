#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	int n, m;
	cin >> n >> m;
	int in1[n];
	int in2[m];
	for(int i = 1; i <= n; i++){
		cin >> in1[i];
	}
	for(int j = 1; j <= m; j++){
		cin >> in2[j];
	}
	vector<int>in3;
	int i = 1;
	int j = 1;
	while(i <= n || j <= m){
		if(j == m + 1 || (i <= n && in1[i] <= in2[j])){
			in3.push_back(in1[i++]);
		}
		else{
			in3.push_back(in2[j++]);
		}
	}
	for(auto it: in3){
		cout << it << " ";
	}
	return 0;
}
