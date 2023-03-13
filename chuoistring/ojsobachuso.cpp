#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	string kytu;
	while(cin >> kytu){
		set<int>ans;
		for(int i=0; i<kytu.size()-2; i++){
			int tmp = atoi(kytu.substr(i, 3).c_str());
			int l=log10(tmp)+1;
			if(l==3){
				ans.insert(tmp);
			}
		}
		cout<<ans.size()<<endl;
	}
	return 0;
}
