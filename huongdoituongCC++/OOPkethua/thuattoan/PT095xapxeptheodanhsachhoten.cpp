#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(int argc, char** argv) {
	string s;
	vector<string>save;
	while(getline(cin, s)){
		if(s == "***"){
			break;
		}
		else{
			for(int i = 0; i < s.size(); i++){
				if(s[i] == ' '){
					s[i + 1] = toupper(s[i + 1]);
				}
				else{
					s[i] = tolower(s[i]);
				}
			}
			stringstream ss(s);
			string value;
			vector <string> v;
			while(ss >> value){
				v.push_back(value);
			}
			for(int i = 0; i < v[v.size() - 1].size(); i++){
				v[v.size() - 1][i] = toupper(v[v.size() - 1][i]);
			}
			string res = v[v.size() - 1];
			res += " ";	
			
			for(int i = 0; i < v.size() - 1; i++){
				res += v[i];
				res += " ";
			}
			save.push_back(res);
		}
	}
	sort(save.begin(), save.end());
	for(int i = 0; i < save.size(); i++){
		cout << save[i] << endl;
	}
	return 0;
}
