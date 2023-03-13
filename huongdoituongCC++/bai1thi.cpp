#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int res = 0;
		for(int i = 0 ; i < s.size(); i++){
			res += (s[i] - '0');
		}
		if(res % 9 == 0 &&(s[s.size() - 1] == '0' || s[s.size() - 1] == '5')){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
