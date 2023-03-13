#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<char> save;
		set <char> count;
		for(int i = 0; i < s.length(); i++){
			if(isdigit(s[i])){
				save.push_back(s[i]);
				count.insert(s[i]);
			}
		}
		cout << save.size() - count.size() << endl;
	}
	return 0;
}
