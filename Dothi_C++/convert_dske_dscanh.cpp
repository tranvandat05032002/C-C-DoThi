#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>>edge;
int main(int argc, char** argv) {
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s, number;
		getline(cin, s);
		stringstream ss (s);
		while(ss >> number){
			if(i < stoi(number)){
				edge.push_back({i, stoi(number)});
			}
		}
	}
	for(auto it : edge){
		cout << it.first << " " << it.second << endl;
	}
	return 0;
}
