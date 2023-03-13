#include<bits/stdc++.h>
using namespace std;
int in[1001][1001];
int main(int argc, char** argv) {
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s, number;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> number){
			in[i][stoi(number)] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << in[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
