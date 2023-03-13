#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	string s;
	getline(cin, s);
	stringstream save(s);
	string tmp;
	vector<string>vt;
	while(getline(save, tmp, ',')){
		vt.push_back(tmp);
	}
	for(string x : vt){
		std:cout<<x<<" ";
	}
	return 0;
}
