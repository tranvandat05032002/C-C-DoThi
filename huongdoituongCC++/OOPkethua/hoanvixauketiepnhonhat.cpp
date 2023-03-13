#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;

int main(int argc, char** argv) {
	string s;
	while(cin >> s){
		vector <string> object;
		object.push_back(s);
		string ans = "";
		bool check = false;
		while(next_permutation(s.begin(), s.end())){	
			ans = s;
			check = true;
			break;
		};
		if(!check){
			cout << "no answer" <<endl;
		}
		else{
			cout << ans << endl;
		}
	}
	return 0;
}
